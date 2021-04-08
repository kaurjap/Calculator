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
    virtual ~Expr_Command_Factory (void) = 0;

    // methods to return products i.e. specific commands
    virtual Number_Command * create_number_command (int num) = 0;

    virtual Add_Command * create_add_command (void) = 0;

    virtual Subtract_Command * create_subtract_command (void) = 0;

    virtual Multiply_Command * create_multiply_command (void) = 0;

    virtual Divide_Command * create_divide_command (void) = 0;

private:

    
};

#endif   // !defined _EXPR_COMMAND_FACTORY_H_
