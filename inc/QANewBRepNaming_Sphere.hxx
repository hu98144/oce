// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_Sphere_HeaderFile
#define _QANewBRepNaming_Sphere_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _QANewBRepNaming_TopNaming_HeaderFile
#include <QANewBRepNaming_TopNaming.hxx>
#endif
#ifndef _QANewBRepNaming_TypeOfPrimitive3D_HeaderFile
#include <QANewBRepNaming_TypeOfPrimitive3D.hxx>
#endif
class TDF_Label;
class BRepPrimAPI_MakeSphere;


//! To load the Sphere results <br>
class QANewBRepNaming_Sphere  : public QANewBRepNaming_TopNaming {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   QANewBRepNaming_Sphere();
  
  Standard_EXPORT   QANewBRepNaming_Sphere(const TDF_Label& ResultLabel);
  
  Standard_EXPORT     void Init(const TDF_Label& ResultLabel) ;
  
  Standard_EXPORT     void Load(BRepPrimAPI_MakeSphere& mkSphere,const QANewBRepNaming_TypeOfPrimitive3D Type) const;
  //! Returns the label of the bottom <br>
//!          face of the Sphere. <br>
  Standard_EXPORT     TDF_Label Bottom() const;
  //! Returns the label of the top <br>
//!          face of the Sphere. <br>
  Standard_EXPORT     TDF_Label Top() const;
  //! Returns the label of the lateral <br>
//!          face of the Sphere. <br>
  Standard_EXPORT     TDF_Label Lateral() const;
  //! Returns the label of the first <br>
//!          side of the Sphere. <br>
  Standard_EXPORT     TDF_Label StartSide() const;
  //! Returns the label of the second <br>
//!          side of the Sphere. <br>
  Standard_EXPORT     TDF_Label EndSide() const;
  //! Returns the label of the meridian <br>
//!          edges of the Sphere. <br>
  Standard_EXPORT     TDF_Label Meridian() const;
  //! Returns the label of the degenerated <br>
//!          edges of the Sphere. <br>
  Standard_EXPORT     TDF_Label Degenerated() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
