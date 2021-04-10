// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Open_Paranthesis_Command.h"

Open_Paranthesis_Command::Open_Paranthesis_Command (void)
    : precedence_val_ (10)
{

} // end constructor


void Open_Paranthesis_Command::execute (void) 
{
    // open_paranthesis command does nothing on the stack, exists to aids in the conversion from infix to postfix
} // end execute