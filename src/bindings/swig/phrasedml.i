/**
 * \file    phrasedml.i
 * \brief   Language-independent SWIG directives for wrapping libphrasedml
 * \author  Lucian Smith, based on libsbml code from Ben Bornstein and Ben Kovitz
 * 
 */

%module(directors="1") libphrasedml

#pragma SWIG nowarn=473,401,844

%pragma(java) moduleclassmodifiers="
/**
  * Wrapper class for global methods and constants defined by libSBML.
  * <p>
  * <em style='color: #555'>
  * This class of objects is defined by libphrasedml only and has no direct
  * equivalent in terms of Phrasedml components.
  * </em>
  * <p>
  * In the C++ version of libphrasedml, models are parsed and stored in a 
  * global object, which can then be queried by subsequent calls to
  * phrasedml API functions.  However, all returned elements become the
  * property of the caller.
  */
public class"

%{
#include "../../phrasedml_api.h"
%}

/**
 *
 * Includes a language specific interface file.
 *
 */

%include local.i

/**
 * Disable warnings about const/non-const versions of functions.
 */
#pragma SWIG nowarn=516


/**
 * The following methods will create new objects.  To prevent memory
 * leaks we must inform SWIG of this.
 */

%typemap(newfree) char * "free($1);";

#ifndef NSBML
%newobject getSBMLString;
%newobject getSBMLInfoMessages;
%newobject getSBMLWarnings;
#endif

#ifndef USE_COMP
%newobject getCompSBMLString;
#endif

#ifndef NCELLML
%newobject getCellMLString;
#endif

%newobject convertFile;
%newobject convertString;
%newobject getLastError;
%newobject getLastSEDML;
%newobject getLastPhraSEDML;
%newobject getWarnings;
%newobject setWorkingDirectory;

/**
 * Ignore 'freeAll', and all functions that return vectors, as SWIG cannot convert them properly.
 */

%ignore freeAll;

%include "std_vector.i"
%include "std_string.i"
#%include "std_exception.i"

// Instantiate templates used by example

//namespace std {
//   %template(UnsignedLongVector) vector<unsigned long>;
//   %template(DoubleVector) vector<double>;
//   %template(DoubleVectorVector) vector<vector<double> >;
//   %template(StringVector) vector<string>;
//   %template(StringVectorVector) vector<vector<string> >;
//}

/**
 * Wrap these files.
 */

%include phrasedml_api.h
