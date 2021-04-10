// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Modulus_Command.h"


Modulus_Command::Modulus_Command (Stack <int> & s)
    : s_ (s),
      precedence_val_ (2)
{

} // end constructor


void Modulus_Command::execute (void)
{
    int n2 = s_.pop ();
    int n1 = s_.pop ();
    s_.push (n1 % n2);
} // end execute