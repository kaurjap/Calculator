// -*- C++ -*-

//==============================================================================
/**
 * @file       Number_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_

#include "Expr_Command.h"

/**
 * @class Number_Command
 *
 * 
 */
class Number_Command: public Expr_Command
{
public:
    // constructor
    Number_Command (Stack <int> & s, int n);

    /**
    * method that defines how to execute the number command to just push the number onto the stack
    */ 
    virtual void execute (void);

private:
    // receiver
    Stack <int> & s_;
    int n_;
};


#endif   // !defined _NUMBER_COMMAND_H_
