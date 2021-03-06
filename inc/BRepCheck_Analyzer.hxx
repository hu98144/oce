// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_Analyzer_HeaderFile
#define _BRepCheck_Analyzer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BRepCheck_DataMapOfShapeResult_HeaderFile
#include <BRepCheck_DataMapOfShapeResult.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRepCheck_Result_HeaderFile
#include <Handle_BRepCheck_Result.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class Standard_NullObject;
class Standard_NoSuchObject;
class TopoDS_Shape;
class BRepCheck_Result;


//! A framework to check the overall <br>
//! validity of a shape. For a shape to be valid in Open <br>
//!  CASCADE, it - or its component subshapes - must respect certain <br>
//! criteria. These criteria are checked by the function IsValid. <br>
//! Once you have determined whether a shape is valid or not, you can <br>
//! diagnose its specific anomalies and correct them using the services of <br>
//! the ShapeAnalysis, ShapeUpgrade, and ShapeFix packages. <br>
class BRepCheck_Analyzer  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs a shape validation object defined by the shape S. <br>
//!    <S> is the  shape  to control.  <GeomControls>  If <br>
//!          False   only topological informaions  are checked. <br>
//!          The geometricals controls are <br>
//!          For a Vertex : <br>
//!          BRepCheck_InvalidToleranceValue  NYI <br>
//!          For an Edge : <br>
//!          BRepCheck_InvalidCurveOnClosedSurface, <br>
//!          BRepCheck_InvalidCurveOnSurface, <br>
//!          BRepCheck_InvalidSameParameterFlag, <br>
//!          BRepCheck_InvalidToleranceValue  NYI <br>
//!          For a face : <br>
//!          BRepCheck_UnorientableShape, <br>
//!          BRepCheck_IntersectingWires, <br>
//!          BRepCheck_InvalidToleranceValue  NYI <br>
//!          For a wire : <br>
//!          BRepCheck_SelfIntersectingWire <br>
      BRepCheck_Analyzer(const TopoDS_Shape& S,const Standard_Boolean GeomControls = Standard_True);
  //! <S> is the  shape  to control.  <GeomControls>  If <br>
//!          False   only topological informaions  are checked. <br>
//!          The geometricals controls are <br>
//!          For a Vertex : <br>
//!          BRepCheck_InvalidTolerance  NYI <br>
//!          For an Edge : <br>
//!          BRepCheck_InvalidCurveOnClosedSurface, <br>
//!          BRepCheck_InvalidCurveOnSurface, <br>
//!          BRepCheck_InvalidSameParameterFlag, <br>
//!          BRepCheck_InvalidTolerance  NYI <br>
//!          For a face : <br>
//!          BRepCheck_UnorientableShape, <br>
//!          BRepCheck_IntersectingWires, <br>
//!          BRepCheck_InvalidTolerance  NYI <br>
//!          For a wire : <br>
//!          BRepCheck_SelfIntersectingWire <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& S,const Standard_Boolean GeomControls = Standard_True) ;
  //! <S> is a  subshape of the  original shape. Returns <br>
//!          <STandard_True> if no default has been detected on <br>
//!          <S> and any of its subshape. <br>
  Standard_EXPORT     Standard_Boolean IsValid(const TopoDS_Shape& S) const;
  //!  Returns true if no defect is <br>
//! detected on the shape S or any of its subshapes. <br>
//! Returns true if the shape S is valid. <br>
//! This function checks whether a given shape is valid by checking that: <br>
//! -      the topology is correct <br>
//! -      parameterization of edges in particular is correct. <br>
//! For the topology to be correct, the following conditions must be satisfied: <br>
//! -      edges should have at least two vertices if they are not <br>
//!    degenerate edges. The vertices should be within the range of <br>
//!  the bounding edges at the tolerance specified in the vertex, <br>
//! -      edges should share at least one face. The representation of <br>
//!  the edges should be within the tolerance criterion assigned to them. <br>
//! -      wires defining a face should not self-intersect and should be closed, <br>
//! - there should be one wire which contains all other wires inside a face, <br>
//! -      wires should be correctly oriented with respect to each of the edges, <br>
//! -      faces should be correctly oriented, in particular with <br>
//!    respect to adjacent faces if these faces define a solid, <br>
//! -      shells defining a solid should be closed. There should <br>
//!    be one enclosing shell if the shape is a solid; <br>
//!    To check parameterization of edge, there are 2 approaches depending on <br>
//!    the edge?s contextual situation. <br>
//! -      if the edge is either single, or it is in the context <br>
//!    of a wire or a compound, its parameterization is defined by <br>
//!    the parameterization of its 3D curve and is considered as    valid. <br>
//! -      If the edge is in the context of a face, it should <br>
//!    have SameParameter and SameRange flags set to Standard_True. To <br>
//!    check these flags, you should call the function <br>
//!    BRep_Tool::SameParameter and BRep_Tool::SameRange for an <br>
//!    edge. If at least one of these flags is set to Standard_False, <br>
//!    the edge is considered as invalid without any additional check. <br>
//!    If the edge is contained by a face, and it has SameParameter and <br>
//!    SameRange flags set to Standard_True, IsValid checks <br>
//!    whether representation of the edge on face, in context of which the <br>
//!    edge is considered, has the same parameterization up to the <br>
//!    tolerance value coded on the edge. For a given parameter t on the edge <br>
//!    having C as a 3D curve and one PCurve P on a surface S (base <br>
//!    surface of the reference face), this checks that |C(t) - S(P(t))| <br>
//!    is less than or equal to tolerance, where tolerance is the tolerance <br>
//!    value coded on the edge. <br>
        Standard_Boolean IsValid() const;
  
       const Handle_BRepCheck_Result& Result(const TopoDS_Shape& SubS) const;





protected:





private:

  
  Standard_EXPORT     void Put(const TopoDS_Shape& S,const Standard_Boolean Gctrl) ;
  
  Standard_EXPORT     void Perform(const TopoDS_Shape& S) ;
  
  Standard_EXPORT     Standard_Boolean ValidSub(const TopoDS_Shape& S,const TopAbs_ShapeEnum SubType) const;


TopoDS_Shape myShape;
BRepCheck_DataMapOfShapeResult myMap;


};


#include <BRepCheck_Analyzer.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
