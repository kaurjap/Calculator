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

#include "Stack.h"


/**
 * @class Expr_Command
 *
 * Basic implementation of an iterator class for the Array.
 */
class Expr_Command
{
public:
    /**
     * Initializing constructor.
    *
    * @param[in]      arr        Array to iterate over
    */
    Expr_Command_Iterator (Array_Base <T> & arr);

    /// Destructor.
    ~Expr_Command_Iterator (void);

    /**
     * Retrieve the current size of the array.
    *
    * @return          true      if current location is greater than or equal to current size
    *                  false     if current location is less than current size
    */
    bool is_done (void) const;

    /**
     * @return          reference to the current element
    * 
    */
    T & operator * (void);        // TRY: declare method Const here, shouldn't make a different but try in the end

    /**
     * @return          pointer to the current element
    * 
    */
    T * operator -> (void);       // TRY: declare method Const here, shouldn't make a difference but try in the end


protected:
    // receiver
    Stack <int> & s_;
};


#include "Expr_Command.cpp"

#endif   // !defined _EXPR_COMMAND_H_
