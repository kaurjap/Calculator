// -*- C++ -*-

//==============================================================================
/**
 * @file       Stack_Expr_Command_Factory.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include "Expr_Command_Factory.h"


/**
 * @class Stack_Expr_Command_Factory
 *
 * This is a pure abstract class. 
 * Provide the common implementation of all the products i.e. creating new commands in this abstract class.
 */
class Stack_Expr_Command_Factory: public Expr_Command_Factory
{
public:
    // constructor
    Stack_Expr_Command_Factory (Stack <int> & s);

    // destructor
    // virtual ~Stack_Expr_Command_Factory (void);      // prolly don't need it because if I define one here, I have to define one for the subclass (which will be empty, so it calls this --> error: undefined reference)

    // methods to return concrete products i.e. specific commands to operate on the stack
    virtual Number_Command * create_number_command (int num);

    virtual Add_Command * create_add_command (void);

    virtual Subtract_Command * create_subtract_command (void);

    virtual Multiply_Command * create_multiply_command (void);

    virtual Divide_Command * create_divide_command (void);

private:
    Stack <int> & stack_;
    
};

#endif   // !defined _STACK_EXPR_COMMAND_FACTORY_H_
