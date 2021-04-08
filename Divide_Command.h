// -*- C++ -*-

//==============================================================================
/**
 * @file       Divide_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class Divide_Command
 *
 * 
 */
class Divide_Command: public Expr_Command
{
public:
    // constructor
    Divide_Command (Stack <int> & s);

    /**
    * method that defines how to execute the division command to divide two numbers on the postfix stack
    */
    virtual void execute (void);

private:
    // receiver
    Stack <int> & s_;
};


#endif   // !defined _DIVIDE_COMMAND_H_
