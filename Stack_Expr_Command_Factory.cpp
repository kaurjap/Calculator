// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory (Stack <int> & s)
    : stack_ (s)
{

} // end constructor

/*
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory (void)
{
    // nothing allocated on the heap in this class, so nothing to delete
} // end destructor
*/

Number_Command * Stack_Expr_Command_Factory::create_number_command (int num)
{
    return new Number_Command (stack_, num);
} // end create_number_command


Add_Command * Stack_Expr_Command_Factory::create_add_command (void)
{
    return new Add_Command (stack_);
} // end create_add_command


Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command (void)
{
    return new Subtract_Command (stack_);
} // end create_add_command


Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command (void)
{
    return new Multiply_Command (stack_);
} // end create_add_command


Divide_Command * Stack_Expr_Command_Factory::create_divide_command (void)
{
    return new Divide_Command (stack_);
} // end create_add_command


Modulus_Command * Stack_Expr_Command_Factory::create_modulus_command (void) 
{
    return new Modulus_Command (stack_);
} // end create_modulus_command
