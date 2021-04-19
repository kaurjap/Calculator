// -*- C++ -*-

//==============================================================================
/**
 * @file       Modulus_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _MODULUS_COMMAND_H_
#define _MODULUS_COMMAND_H_

#include "Binary_Command.h"

/**
 * @class Add_Command
 *
 * 
 */
class Modulus_Command: public Expr_Command
{
public:
    // constructor
    Modulus_Command (Stack <int> & s);

    /**
    * method that defines how to execute the modulus command to find the mod of two numbers on the postfix stack
    */
    virtual void execute (void);

private:
    // receiver
    Stack <int> & s_;
};


#endif   // !defined _MODULUS_COMMAND_H_
