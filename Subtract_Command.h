// -*- C++ -*-

//==============================================================================
/**
 * @file       Subtract_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class Subtract_Command
 *
 * 
 */
class Subtract_Command: public Expr_Command
{
public:
    // constructor
    Subtract_Command (Stack <int> & s);

    /**
    * method that defines how to execute the subtraction command for subtraction two numbers on the stack
    */
    virtual void execute (void);

private:
    // receiver
    Stack <int> & s_;
};


#endif   // !defined _SUBTRACT_COMMAND_H_
