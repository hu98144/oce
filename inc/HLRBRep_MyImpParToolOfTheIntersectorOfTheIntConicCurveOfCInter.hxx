// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter_HeaderFile
#define _HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _IntCurve_IConicTool_HeaderFile
#include <IntCurve_IConicTool.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class IntCurve_IConicTool;
class HLRBRep_CurveTool;



class HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter  : public math_FunctionWithDerivative {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter(const IntCurve_IConicTool& IT,const Standard_Address& PC);
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real Param,Standard_Real& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real Param,Standard_Real& D) ;
  
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real Param,Standard_Real& F,Standard_Real& D) ;





protected:





private:



Standard_Address TheParCurve;
IntCurve_IConicTool TheImpTool;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
