// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

// nothing to implement for this class, since it is a pure abstract class

#include "Expr_Command.h"

Expr_Command::Expr_Command (void) 
    : precedence_val_ (-1)
{

} // end constructor

Expr_Command::Expr_Command (int n)
    : precedence_val_ (n)
{

} // end initialization constructor for predence value


int Expr_Command::precedence (void)
{
    return this->precedence_val_; // using this-> because polymorphic
} // end precedence

void Expr_Command::execute (void)
{
    // subclasses execute their own execute methods, this is included to make use of the base class for the paranthesis command
} // end execute