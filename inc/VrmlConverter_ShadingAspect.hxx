// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_ShadingAspect_HeaderFile
#define _VrmlConverter_ShadingAspect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_VrmlConverter_ShadingAspect_HeaderFile
#include <Handle_VrmlConverter_ShadingAspect.hxx>
#endif

#ifndef _Handle_Vrml_Material_HeaderFile
#include <Handle_Vrml_Material.hxx>
#endif
#ifndef _Vrml_ShapeHints_HeaderFile
#include <Vrml_ShapeHints.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Vrml_Material;
class Vrml_ShapeHints;


//! qualifies the aspect properties for <br>
//!          the VRML conversation of ShadedShape . <br>
class VrmlConverter_ShadingAspect : public MMgt_TShared {

public:

  //! create a default ShadingAspect. <br>
  Standard_EXPORT   VrmlConverter_ShadingAspect();
  
  Standard_EXPORT     void SetFrontMaterial(const Handle(Vrml_Material)& aMaterial) ;
  
  Standard_EXPORT     Handle_Vrml_Material FrontMaterial() const;
  
  Standard_EXPORT     void SetShapeHints(const Vrml_ShapeHints& aShapeHints) ;
  
  Standard_EXPORT     Vrml_ShapeHints ShapeHints() const;
  //! defines necessary of  a  calculation  of  normals for  ShadedShape  to  more <br>
//!          accurately  display  curved  surfaces,  pacticularly  when  smoooth  or  phong <br>
//!          shading  is  used  in  VRML  viewer. <br>
//!          By default False  -  the normals are not calculated, <br>
//!          True  -  the normals are calculated. <br>
//!          Warning: If  normals  are  calculated  the  resulting  VRML  file  will <br>
//!          be  substantially  lager. <br>
  Standard_EXPORT     void SetHasNormals(const Standard_Boolean OnOff) ;
  //! returns True if the normals are calculating <br>
  Standard_EXPORT     Standard_Boolean HasNormals() const;
  //! defines necessary of writing  Material from Vrml into  output  OStream. <br>
//!          By default False  -  the material is not writing into OStream, <br>
//!          True  -  the material is writing. <br>
  Standard_EXPORT     void SetHasMaterial(const Standard_Boolean OnOff) ;
  //! returns True if the  materials is  writing into OStream. <br>
  Standard_EXPORT     Standard_Boolean HasMaterial() const;




  DEFINE_STANDARD_RTTI(VrmlConverter_ShadingAspect)

protected:




private: 


Handle_Vrml_Material myFrontMaterial;
Vrml_ShapeHints myShapeHints;
Standard_Boolean myHasNormals;
Standard_Boolean myHasMaterial;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
