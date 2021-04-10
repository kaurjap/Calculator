// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Multiply_Command.h"


Multiply_Command::Multiply_Command (Stack <int> & s)
    : s_ (s),
      precedence_val_ (2)
{

} // end constructor


void Multiply_Command::execute (void)
{
    int n2 = s_.pop ();
    int n1 = s_.pop ();
    s_.push (n1 * n2);
} // end execute