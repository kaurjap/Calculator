// -*- C++ -*-

//==============================================================================
/**
 * @file       Binary_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _BINARY_COMMAND_H_
#define _BINARY_COMMAND_H_

#include "Stack.h"
#include "Expr_Command.h"

/**
 * @class Binary_Command
 *
 * This is a pure abstract class that is partially implemented. 
 * Provides the common implementation of all the binary commands in this abstract class.
 * The execute method is pure abstract, the implementation of which is provided by the specific sub commands as intended.
 */
class Binary_Command: public Expr_Command
{
public:

    // constructor
    Binary_Command (void);

    // initialization constructor
    Binary_Command (int n);

    // Binary_Command (Stack <int> & s);

    /**
    * a pure virtual method
    *  
    * method that declares the execution behavior for each concrete command that needs to be implemented 
    * by each subclass. 
    * 
    */
    virtual void execute (void) = 0;


protected:
    // includes precedence_val_ from the base class

};

#endif   // !defined _BINARY_COMMAND_H_
