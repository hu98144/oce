// Created on: 1993-01-22
// Created by: Gilles DEBARBOUILLE
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Dynamic_Method.ixx>
#include <Dynamic_Variable.hxx>
#include <Dynamic_Parameter.hxx>


//=======================================================================
//function : Dynamic_Method
//purpose  : 
//=======================================================================

Dynamic_Method::Dynamic_Method()
{}


//=======================================================================
//function : FirstVariableNode
//purpose  : 
//=======================================================================

Handle(Dynamic_VariableNode) Dynamic_Method::FirstVariableNode() const
{
  return thefirstvariablenode;
}

//=======================================================================
//function : Variable
//purpose  : 
//=======================================================================

Standard_Boolean Dynamic_Method::Variable(const Standard_CString avariable) const
{
  Handle(Dynamic_Variable) variable;
  Handle(Dynamic_VariableNode) definition = thefirstvariablenode;

  while(!definition.IsNull())
    {
      variable = definition->Object();
      if(variable->Parameter()->Name() == avariable) return Standard_True;
      definition = definition->Next();
    }
  return Standard_False;
}

//=======================================================================
//function : Variable
//purpose  : 
//=======================================================================

void Dynamic_Method::Variable(const Handle(Dynamic_Variable)& avariable)
{
  Handle(Dynamic_VariableNode) variablenode = new Dynamic_VariableNode(avariable);
  if(!thefirstvariablenode.IsNull()) variablenode->Next(thefirstvariablenode);
  thefirstvariablenode = variablenode;
}

//=======================================================================
//function : Value
//purpose  : 
//=======================================================================

Standard_Boolean Dynamic_Method::Value(const Standard_CString aname,
				       Handle(Dynamic_Parameter)& aparameter,
				       Dynamic_ModeEnum& amode) const
{
  Handle(Dynamic_Variable) variable;

  if(Value(aname,variable))
    {
      amode = variable->Mode();
      aparameter = variable->Parameter();
      return Standard_True;
    }
  else
    {
      return Standard_False;
    }
}

//=======================================================================
//function : Value
//purpose  : 
//=======================================================================

Standard_Boolean Dynamic_Method::Value(const Standard_CString aname,
				       Handle(Dynamic_Variable)& avariable) const
{
  Handle(Dynamic_VariableNode) variablenode;
  Handle(Dynamic_Variable) variable;

  variablenode = thefirstvariablenode;

  while(!variablenode.IsNull())
    {
      variable = variablenode->Object();
      if(variable->Parameter()->Name() == aname)
	{
	  avariable = variable;
	  return Standard_True;
	}
      variablenode = variablenode->Next();
    }
  
  return Standard_False;
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void Dynamic_Method::Dump(Standard_OStream& astream) const
{
  Handle(Dynamic_Variable) variable;
  Handle(Dynamic_VariableNode) definition = thefirstvariablenode;

  while(!definition.IsNull())
    {
      variable = definition->Object();
      variable->Dump(astream);
      astream<<" ; "<<endl;
      definition = definition->Next();
    }
  astream<<endl;
}
