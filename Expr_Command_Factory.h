// -*- C++ -*-

//==============================================================================
/**
 * @file       Expr_Command_Factory.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include "Number_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Modulus_Command.h"
#include "Open_Paranthesis_Command.h"
#include "Closed_Paranthesis_Command.h"

/**
 * @class Expr_Command_Factory
 *
 * This is a pure abstract class. 
 * Provide the common implementation of all the products i.e. creating new commands in this abstract class.
 */
class Expr_Command_Factory
{
public:
    // destructor
    // virtual ~Expr_Command_Factory (void) = 0;    prolly don't need it because if I define one here, I have to define one for the subclass (which will be empty, so it calls this --> error: undefined reference)

    // methods to return products i.e. specific commands
    virtual Number_Command * create_number_command (int num) = 0;

    virtual Add_Command * create_add_command (void) = 0;

    virtual Subtract_Command * create_subtract_command (void) = 0;

    virtual Multiply_Command * create_multiply_command (void) = 0;

    virtual Divide_Command * create_divide_command (void) = 0;

    virtual Modulus_Command * create_modulus_command (void) = 0;

    virtual Open_Paranthesis_Command * create_open_paranthesis_command (void) = 0;

    virtual Closed_Paranthesis_Command * create_closed_paranthesis_command (void) = 0;

private:


};

#endif   // !defined _EXPR_COMMAND_FACTORY_H_