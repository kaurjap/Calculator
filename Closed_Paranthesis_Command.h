// -*- C++ -*-

//==============================================================================
/**
 * @file       Closed_Paranthesis_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _CLOSED_PARANTHESIS_COMMAND_H_
#define _CLOSED_PARANTHESIS_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class Closed_Paranthesis_Command
 *
 * 
 */
class Closed_Paranthesis_Command: public Expr_Command 
{
public:
    // constructor
    Closed_Paranthesis_Command (void);

    /**
     * method to execute behavior when a closed parathesis is accounted
    */ 
    virtual void execute (void);

private:
    // no stack needed
};


#endif   // !defined _CLOSED_PARANTHESIS_COMMAND_H_
