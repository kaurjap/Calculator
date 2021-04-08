// -*- C++ -*-

//==============================================================================
/**
 * @file       Expr_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_


/**
 * @class Expr_Command
 *
 * This is a pure abstract class. 
 * Provide the common implement of all the commands in this abstract class.
 */
class Expr_Command
{
public:
    /**
    * a pure virtual method
    *  
    * method that declares the execution behavior for each concrete command that needs to be implemented 
    * by each subclass. 
    * 
    */
    virtual void execute (void) = 0;
};

#endif   // !defined _EXPR_COMMAND_H_
