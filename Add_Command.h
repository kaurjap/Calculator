// -*- C++ -*-

//==============================================================================
/**
 * @file       Add_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class Add_Command
 *
 * 
 */
class Add_Command: public Expr_Command
{
public:
    // constructor
    Add_Command (Stack <int> & s);

    /**
    * method that defines how to execute the addition command of addition two numbers on the stack
    */
    virtual void execute (void);

private:
    // receiver
    Stack <int> & s_;

    // precedence value of an operation based on pemdas
    int precedence_;
};


#endif   // !defined _ADD_COMMAND_H_
