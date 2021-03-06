// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_ConeToBSplineSurface_HeaderFile
#define _Convert_ConeToBSplineSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Convert_ElementarySurfaceToBSplineSurface_HeaderFile
#include <Convert_ElementarySurfaceToBSplineSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_DomainError;
class gp_Cone;



//!  This algorithm converts a bounded Cone into a rational <br>
//!  B-spline  surface. <br>
//!  The cone a Cone from package gp. Its parametrization is : <br>
//!  P (U, V) =  Loc + V * Zdir + <br>
//!              (R + V*Tan(Ang)) * (Cos(U)*Xdir + Sin(U)*Ydir) <br>
//!  where Loc is the location point of the cone, Xdir, Ydir and Zdir <br>
//!  are the normalized directions of the local cartesian coordinate <br>
//!  system of the cone (Zdir is the direction of the Cone's axis) , <br>
//!  Ang is the cone semi-angle.  The U parametrization range is <br>
//!  [0, 2PI]. <br>
//! KeyWords : <br>
//!  Convert, Cone, BSplineSurface. <br>
class Convert_ConeToBSplineSurface  : public Convert_ElementarySurfaceToBSplineSurface {
public:

  DEFINE_STANDARD_ALLOC

  
//!  The equivalent B-spline surface as the same orientation as the <br>
//!  Cone in the U and V parametric directions. <br>
//!  Raised if U1 = U2 or U1 = U2 + 2.0 * Pi <br>
//!  Raised if V1 = V2. <br>
  Standard_EXPORT   Convert_ConeToBSplineSurface(const gp_Cone& C,const Standard_Real U1,const Standard_Real U2,const Standard_Real V1,const Standard_Real V2);
  
//!  The equivalent B-spline surface as the same orientation as the <br>
//!  Cone in the U and V parametric directions. <br>
//!  Raised if V1 = V2. <br>
  Standard_EXPORT   Convert_ConeToBSplineSurface(const gp_Cone& C,const Standard_Real V1,const Standard_Real V2);





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
