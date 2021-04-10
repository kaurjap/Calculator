// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Number_Command.h"


Number_Command::Number_Command (Stack <int> & s, int n)
    : s_ (s),
      n_ (n),
      precedence_val_ (0)
{

} // end constructor


void Number_Command::execute (void)
{
    s_.push (n_);
} // end execute