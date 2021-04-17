// -*- C++ -*-

//==============================================================================
/**
 * @file       Open_Paranthesis_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _OPEN_PARANTHESIS_COMMAND_H_
#define _OPEN_PARANTHESIS_COMMAND_H_

#include "Expr_Command.h"

// COMMENT: Create a design that does not require having parenthesis as
 // as command object since parenthesis are not executed.

/**
 * @class Open_Paranthesis_Command
 *
 * 
 */
class Open_Paranthesis_Command: public Expr_Command 
{
public:
    // constructor
    Open_Paranthesis_Command (void);

    /**
    * execute method
    */ 
    virtual void execute (void);

private:
    // no stack needed
};


#endif   // !defined _OPEN_PARANTHESIS_COMMAND_H_
