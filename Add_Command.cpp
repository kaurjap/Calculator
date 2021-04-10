// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Command.h"


Add_Command::Add_Command (Stack <int> & s)
    : s_ (s),
      Expr_Command (1)
{

} // end constructor


void Add_Command::execute (void)
{
    int n2 = s_.pop ();
    int n1 = s_.pop ();
    s_.push (n1 + n2);
} // end execute