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


int Expr_Command::precedence (void)
{
    return this->precedence_val_; // using this-> because polymorphic
} // end precedence
