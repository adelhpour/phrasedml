#include <algorithm>
#include <cassert>
#include <functional>
#include <iostream>
#include <sstream>
#include <ostream>
#include <set>

#include "model.h"
#include "modelChange.h"
#include "registry.h"
#include "stringx.h"
#include "task.h"

#include "sedml/SedChange.h"
#include "sedml/SedChangeAttribute.h"
#include "sedml/SedSetValue.h"
#include "sedml/SedDocument.h"

#include "sbml/math/L3Parser.h"
#include "sbml/math/L3FormulaFormatter.h"

using namespace std;

bool isLoop(change_type type)
{
  switch(type) {
  case ctype_val_assignment:
  case ctype_formula_assignment:
    return false;
  case ctype_loop_uniformLinear:
  case ctype_loop_uniformLog:
  case ctype_loop_vector:
    return true;
  }
  assert(false); //uncaught type
  return false;
}


ModelChange::ModelChange(vector<const string*>* name, std::vector<std::string>* formula)
  : m_type(ctype_formula_assignment)
  , m_variable()
  , m_values()
  , m_formula()
  , m_astnode(NULL)
  , m_model()
{
  if (name==NULL) return;
  for (size_t n=0; n<name->size(); n++) {
    m_variable.push_back(*(*name)[n]);
  }
  m_formula = getStringFrom(formula, " ");
  m_astnode = g_registry.parseFormula(m_formula);
  if (m_astnode->isNumber()) {
    m_values.push_back(m_astnode->getValue());
    delete m_astnode;
    m_astnode = NULL;
    m_formula.clear();
    m_type = ctype_val_assignment;
    return;
  }
  char* rt_form = SBML_formulaToL3String(m_astnode);
  m_formula = rt_form;
  free(rt_form);
}

ModelChange::ModelChange(change_type type, vector<const string*>* name, const vector<double>* values)
  : m_type(type)
  , m_variable()
  , m_values(*values)
  , m_formula()
  , m_astnode(NULL)
  , m_model()
{
  if (name==NULL) return;
  for (size_t n=0; n<name->size(); n++) {
    m_variable.push_back(*(*name)[n]);
  }
}

ModelChange::ModelChange(SedChange* sedchange, SedDocument* seddoc, string model)
  : m_type(ctype_val_assignment)
  , m_variable()
  , m_values()
  , m_formula()
  , m_astnode(NULL)
  , m_model()
{
  string target = sedchange->getTarget();
  m_variable = getIdFromXPath(target);

  switch(sedchange->getTypeCode())
  {
  case SEDML_CHANGE_ATTRIBUTE:
    {
      SedChangeAttribute* sedchangeatt = static_cast<SedChangeAttribute*>(sedchange);
      stringstream val(sedchangeatt->getNewValue());
      double value;
      val >> value;
      m_values.push_back(value);
      m_type = ctype_val_assignment;
    }
    break;
  case SEDML_CHANGE_COMPUTECHANGE:
    {
      SedComputeChange* computechange = static_cast<SedComputeChange*>(sedchange);
      setASTNode(computechange->getMath());
      m_type = ctype_formula_assignment;
    }
    break;
  default:
    //Warn that we don't handle these yet.
    break;
  }
}

ModelChange::ModelChange(SedRange* sr)
  : m_type(ctype_val_assignment)
  , m_variable()
  , m_values()
  , m_formula()
  , m_astnode(NULL)
  , m_model()
{
  switch(sr->getTypeCode()) {
  case SEDML_RANGE_UNIFORMRANGE:
    {
      SedUniformRange* uniform = static_cast<SedUniformRange*>(sr);
      string type = uniform->getType();
      if (CaselessStrCmp(type, "linear")) {
        m_type = ctype_loop_uniformLinear;
      }
      else if (CaselessStrCmp(type, "log")) {
        m_type = ctype_loop_uniformLog;
      }
      else {
        g_registry.addWarning("Unknown range type '" + type + "'; assuming 'linear'.");
        m_type = ctype_loop_uniformLinear;
      }
      m_values.push_back(uniform->getStart());
      m_values.push_back(uniform->getEnd());
      m_values.push_back(uniform->getNumberOfPoints());
      m_variable.push_back(uniform->getId());
    }
    break;
  case SEDML_RANGE_VECTORRANGE:
    {
      SedVectorRange* vector = static_cast<SedVectorRange*>(sr);
      m_type = ctype_loop_vector;
      m_values = vector->getValues();
      m_variable.push_back(vector->getId());
    }
    break;
  case SEDML_RANGE_FUNCTIONALRANGE:
    {
      SedFunctionalRange* func = static_cast<SedFunctionalRange*>(sr);
      m_type = ctype_formula_assignment;
      setASTNode(func->getMath());
      //We'll worry about the variables later.
    }
    break;
  }
}

ModelChange::ModelChange(SedParameter* param)
  : m_type(ctype_val_assignment)
  , m_variable()
  , m_values()
  , m_formula()
  , m_astnode(NULL)
  , m_model()
{
  m_variable.push_back(param->getId());
  m_values.push_back(param->getValue());
}

ModelChange::ModelChange(SedSetValue* ssv)
  : m_type(ctype_val_assignment)
  , m_variable()
  , m_values()
  , m_formula()
  , m_astnode(NULL)
  , m_model()
{
  m_variable = getIdFromXPath(ssv->getTarget());
  m_variable.insert(m_variable.begin(), ssv->getModelReference());
  setASTNode(ssv->getMath());
  if (m_astnode != NULL && m_astnode->isNumber()) {
    m_values.push_back(m_astnode->getValue());
    delete m_astnode;
    m_astnode = NULL;
    m_formula.clear();
    m_type = ctype_val_assignment;
  }
  else {
    m_type = ctype_formula_assignment;
  }
}

ModelChange::ModelChange(const ModelChange& orig)
  : m_type(orig.m_type)
  , m_variable(orig.m_variable)
  , m_values(orig.m_values)
  , m_formula(orig.m_formula)
  , m_astnode(orig.m_astnode)
  , m_model(orig.m_model)
{
  if(m_astnode != NULL) {
    m_astnode = m_astnode->deepCopy();
  }
}

ModelChange& ModelChange::operator=(const ModelChange& orig)
{
  m_type = orig.m_type;
  m_variable = orig.m_variable;
  m_values = orig.m_values;
  m_formula = orig.m_formula;
  m_astnode = orig.m_astnode;
  if (m_astnode != NULL) {
    m_astnode = m_astnode->deepCopy();
  }
  m_model = orig.m_model;
  return *this;
}

ModelChange::~ModelChange()
{
  m_variable.clear();
  m_values.clear();
  m_formula.clear();
  delete m_astnode;
  m_astnode = NULL;
  m_model.clear();
}

change_type ModelChange::getType() const
{
  return m_type;
}

string ModelChange::getPhraSEDML() const
{
  string ret = "";
  switch (m_type) {
  case ctype_val_assignment:
    ret = getStringFrom(&m_variable, ".");
    ret += " = ";
    ret += DoubleToString(m_values[0]);
    break;
  case ctype_loop_uniformLinear:
    ret = getStringFrom(&m_variable, ".");
    ret += " in uniform(";
    ret += getStringFrom(m_values);
    ret += ")";
    break;
  case ctype_loop_uniformLog:
    ret = getStringFrom(&m_variable, ".");
    ret += " in logUniform(";
    ret += getStringFrom(m_values);
    ret += ")";
    break;
  case ctype_loop_vector:
    ret = getStringFrom(&m_variable, ".");
    ret += " in [";
    ret += getStringFrom(m_values);
    ret += "]";
    break;
  case ctype_formula_assignment:
    ret = getStringFrom(&m_variable, ".");
    ret += " = " + m_formula;
    break;
  default:
    break;
  }
  return ret;
}

bool ModelChange::addModelChangeToSEDMLModel(SedModel* sedmodel) const
{
  SedChangeAttribute* sca = NULL;
  PhrasedModel* mod = g_registry.getModel(m_model);
  SBMLDocument* doc = mod->getSBMLDocument();
  string attxpath = getValueXPathFromId(&m_variable, doc);
  string elxpath = getElementXPathFromId(&m_variable, doc);
  switch (m_type) {
  case ctype_val_assignment:
    if (attxpath.empty()) {
      if (m_variable.size()==1) {
        //Nothing to be done--it's a local variable used elsewhere.
        return false;
      }
      //If m_variable is larger than one, the referenced variable *has* to be in the model.  If not, there's an error.
      return true;
    }
    sca = sedmodel->createChangeAttribute();
    if (mod==NULL) return true;
    sca->setTarget(attxpath);
    sca->setNewValue(DoubleToString(m_values[0]));
    return false;
  case ctype_loop_uniformLinear:
  case ctype_loop_uniformLog:
  case ctype_loop_vector:
    g_registry.setError("It is not legal to have a looping change construct in a model directly.  You must use a repeated task instead.", 0);
    return true;
  case ctype_formula_assignment:
    if (elxpath.empty()) {
      //Nothing to be done--it's a local variable used elsewhere.
      return false;
    }
    {
      SedComputeChange* scc = sedmodel->createComputeChange();
      scc->setTarget(elxpath);
      scc->setMath(m_astnode);
    }
    return false;
  default:
    //unimplemented
    return true;
  }
}

bool ModelChange::addModelChangeToSEDMLRepeatedTask(SedRepeatedTask* sedrt, vector<string> tasks) const
{
  SedSetValue* ssv = NULL;
  set<SBMLDocument*> docs;
  set<PhrasedModel*> models;
  for (size_t t=0; t<tasks.size(); t++) {
    set<PhrasedModel*> taskmodels = g_registry.getTask(tasks[t])->getModels();
    models.insert(taskmodels.begin(), taskmodels.end());
  }
  for (set<PhrasedModel*>::iterator pm=models.begin(); pm!= models.end(); pm++) {
    if (*pm != NULL) {
      docs.insert((*pm)->getSBMLDocument());
    }
  }
  //Figure out what we're referencing:
  SBMLDocument* refdoc = NULL;
  string modref = "";
  string xpath = "";
  string type = "log";
  if (m_variable.size() > 1) {
    PhrasedModel* model = g_registry.getModel(m_variable[0]);
    if (model != NULL) {
      refdoc = model->getSBMLDocument();
      vector<string> onlyelname = m_variable;
      onlyelname.erase(onlyelname.begin(), onlyelname.end()-onlyelname.size()+1);
      xpath = getElementXPathFromId(&onlyelname, refdoc);
      modref = model->getId();
    }
  }
  if (refdoc==NULL) {
    for (set<PhrasedModel*>::iterator rmod=models.begin(); rmod != models.end(); rmod++) {
      if (xpath.empty()) {
        xpath = getElementXPathFromId(&m_variable, (*rmod)->getSBMLDocument());
        modref = (*rmod)->getId();
      }
    }
  }
  switch (m_type) {
  case ctype_val_assignment:
    //If this is a model variable, we handle it here:
    if (!xpath.empty()) {
      SedSetValue* ssv = sedrt->createTaskChange();
      ssv->setTarget(xpath);
      ssv->setModelReference(modref);
      ASTNode astn(AST_REAL);
      astn.setValue(m_values[0]);
      ssv->setMath(&astn);
      return false;
    }
    //If it's a val assignment not from a model, it is a local variable used for other changes.
    return false;
  case ctype_loop_uniformLinear:
    type = "linear";
    //Then fall through to:
  case ctype_loop_uniformLog:
    {
      SedUniformRange* sur = sedrt->createUniformRange();
      sur->setType(type);
      sur->setStart(m_values[0]);
      sur->setEnd(m_values[1]);
      sur->setNumberOfPoints((int)m_values[2]);
      if (xpath.empty()) {
        //Create a range with a local name and that's it.
        sur->setId(m_variable[0]);
        sedrt->setRangeId(m_variable[0]);
      }
      else {
        //Need to create a temporary variable name, and then point the variable at it
        string rangeid = "uniform_" + type + "_for_" + m_variable[m_variable.size()-1];
        sur->setId(rangeid);
        sedrt->setRangeId(rangeid);
        SedSetValue* ssv = sedrt->createTaskChange();
        ssv->setTarget(xpath);
        ssv->setRange(rangeid);
        ssv->setModelReference(modref);
        ASTNode astn(AST_NAME);
        astn.setName(rangeid.c_str());
        ssv->setMath(&astn);
      }
    }
    break;
  case ctype_loop_vector:
    {
      SedVectorRange* svr = sedrt->createVectorRange();
      svr->setValues(m_values);
      if (xpath.empty()) {
        //Create a range with a local name and that's it.
        svr->setId(m_variable[0]);
        sedrt->setRangeId(m_variable[0]);
      }
      else {
        //Need to create a temporary variable name, and then point the variable at it
        string rangeid = "vector_for_" + m_variable[m_variable.size()-1];
        svr->setId(rangeid);
        sedrt->setRangeId(rangeid);
        SedSetValue* ssv = sedrt->createTaskChange();
        ssv->setTarget(xpath);
        ssv->setRange(rangeid);
        ssv->setModelReference(modref);
        ASTNode astn(AST_NAME);
        astn.setName(rangeid.c_str());
        ssv->setMath(&astn);
      }
    }
    break;
  case ctype_formula_assignment:
    {
      if (xpath.empty()) {
        //Only used as a local variable for other functions--do nothing here; we'll pick them up later for other elements.
      }
      else {
        SedSetValue* ssv = sedrt->createTaskChange();
        ssv->setTarget(xpath);
        ssv->setModelReference(modref);
        ssv->setMath(m_astnode);
      }
    }
    break;
  default:
    //unimplemented
    return true;
  }
  return false;
}

bool ModelChange::setFormulaString(const std::string& formula)
{
  m_formula = formula;
  m_astnode = g_registry.parseFormula(formula);
  return (m_astnode == NULL);
}

bool ModelChange::setASTNode(const ASTNode* astnode)
{
  m_astnode = astnode->deepCopy();
  char* formula = SBML_formulaToL3String(astnode);
  m_formula = formula;
  free(formula);
  return m_formula.empty();
}
void ModelChange::setModel(string model)
{
  m_model = model;
}

void ModelChange::setVariable(std::vector<std::string> id)
{
  m_variable = id;
}

string ModelChange::getModel() const 
{
  return m_model;
}

vector<string> ModelChange::getVariable() const
{
  return m_variable;
}

vector<double> ModelChange::getValues() const
{
  return m_values;
}

const ASTNode* ModelChange::getASTNode() const
{
  return m_astnode;
}

//This version of finalize is called when the ModelChange is part of a Model.
bool ModelChange::finalize() const
{
  PhrasedModel* mod = g_registry.getModel(m_model);
  if (mod==NULL) {
    g_registry.setError("Unable to find the model '" + m_model + "' for a model change.  This is likely a programming error.", 0);
    return true;
  }
  SBMLDocument* doc = mod->getSBMLDocument();
  if (doc==NULL) {
    //Error already set.
    return true;
  }
  if (m_variable.size() > 1) {
    //Make sure m_variable points to existing/creatable elements.
    string xpath = getElementXPathFromId(&m_variable, doc);
    if (xpath.empty()) {
      //Error already set.
      return true;
    }
  }

  return false;
}

//This version of finalize is called when the ModelChange is part of a repeated task
bool ModelChange::finalize(set<PhrasedModel*> models)
{
  //Add the model name to m_variable
  string xpath = "";
  for (set<PhrasedModel*>::iterator model = models.begin(); model != models.end(); model++) {
    const SBMLDocument* doc = (*model)->getSBMLDocument();
    xpath = getElementXPathFromId(&m_variable, doc);
    if (!xpath.empty() && doc->getModel() != NULL) {
      m_variable.insert(m_variable.begin(), (*model)->getId());
      break;
    }
  }
  return false;
}

