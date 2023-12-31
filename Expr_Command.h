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
 * This is an abstract class that is partially implemented. 
 * Provides the common implementation of all the commands in this abstract class.
 */
class Expr_Command
{
public:

    // constructor
    Expr_Command (void);

    // initialization constructor
    Expr_Command (int n);

    /**
    * a pure virtual method
    *  
    * method that declares the execution behavior for each concrete command that needs to be implemented 
    * by each subclass. 
    * 
    */
    virtual void execute (void);

    /**
     * method to access precedence value
     */ 
    virtual int precedence (void);

protected:
    int precedence_val_;
};

#endif   // !defined _EXPR_COMMAND_H_
