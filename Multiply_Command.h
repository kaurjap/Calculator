// -*- C++ -*-

//==============================================================================
/**
 * @file       Multiply_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_

#include "Binary_Command.h"

/**
 * @class Add_Command
 *
 * 
 */
class Multiply_Command: public Expr_Command
{
public:
    // constructor
    Multiply_Command (Stack <int> & s);

    /**
    * method that defines how to execute the multiplication command to multiply two numbers on the postfix stack
    */
    virtual void execute (void);

private:
    // receiver
    Stack <int> & s_;
};


#endif   // !defined _MULTIPLY_COMMAND_H_
