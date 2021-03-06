// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_ShapeHints_HeaderFile
#define _Vrml_ShapeHints_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Vrml_VertexOrdering_HeaderFile
#include <Vrml_VertexOrdering.hxx>
#endif
#ifndef _Vrml_ShapeType_HeaderFile
#include <Vrml_ShapeType.hxx>
#endif
#ifndef _Vrml_FaceType_HeaderFile
#include <Vrml_FaceType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif


//! defines a ShapeHints node of VRML specifying properties of geometry and its appearance. <br>
//!  The ShapeHints node indicates that IndexedFaceSets are solid, contain ordered vertices, or <br>
//!  contain convex faces. <br>
//!  These hints allow VRML implementations to optimize certain rendering features. <br>
//!  Optimizations that may be performed include enabling back-face culling and disabling <br>
//!  two-sided lighting. For example, if an object is solid and has ordered vertices, an <br>
//!  implementation may turn on backface culling and turn off two-sided lighting. To ensure <br>
//!  that an IndexedFaceSet can be viewed from either direction, set shapeType to be <br>
//!  UNKNOWN_SHAPE_TYPE. <br>
//!  If you know that your shapes are closed and will alwsys be viewed from the outside, set <br>
//!  vertexOrdering to be either CLOCKWISE or COUNTERCLOCKWISE (depending on <br>
//!  how you built your object), and set shapeType to be SOLID. Placing this near the top of <br>
//!  your VRML file will allow the scene to be rendered much faster. <br>
//!  The ShapeHints node also affects how default normals are generated. When an <br>
//!  IndexedFaceSet has to generate default normals, it uses the creaseAngle field to determine <br>
//!  which edges should be smoothly shaded and which ones should have a sharp crease. The <br>
//!  crease angle is the angle between surface normals on adjacent polygons. For example, a <br>
//!  crease angle of .5 radians (the default value) means that an edge between two adjacent <br>
//!  polygonal faces will be smooth shaded if the normals to the two faces form an angle that is <br>
//!  less than .5 radians (about 30 degrees). Otherwise, it will be faceted. <br>
class Vrml_ShapeHints  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Vrml_ShapeHints(const Vrml_VertexOrdering aVertexOrdering = Vrml_UNKNOWN_ORDERING,const Vrml_ShapeType aShapeType = Vrml_UNKNOWN_SHAPE_TYPE,const Vrml_FaceType aFaceType = Vrml_CONVEX,const Standard_Real aAngle = 0.5);
  
  Standard_EXPORT     void SetVertexOrdering(const Vrml_VertexOrdering aVertexOrdering) ;
  
  Standard_EXPORT     Vrml_VertexOrdering VertexOrdering() const;
  
  Standard_EXPORT     void SetShapeType(const Vrml_ShapeType aShapeType) ;
  
  Standard_EXPORT     Vrml_ShapeType ShapeType() const;
  
  Standard_EXPORT     void SetFaceType(const Vrml_FaceType aFaceType) ;
  
  Standard_EXPORT     Vrml_FaceType FaceType() const;
  
  Standard_EXPORT     void SetAngle(const Standard_Real aAngle) ;
  
  Standard_EXPORT     Standard_Real Angle() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;





protected:





private:



Vrml_VertexOrdering myVertexOrdering;
Vrml_ShapeType myShapeType;
Vrml_FaceType myFaceType;
Standard_Real myAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
