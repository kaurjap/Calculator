// -*- C++ -*-

//==============================================================================
/**
 * @file       Array_Iterator.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _EXPR_COMMAND_ITERATOR_H_
#define _EXPR_COMMAND_ITERATOR_H_

#include "Array_Base.h"


/**
 * @class Array_Iterator
 *
 * Basic implementation of an iterator class for the Array.
 */
template <typename T>
class Expr_Command_Iterator
{
public:
    /// Type definition of the element type.
    typedef T type;

    /**
     * Initializing constructor.
    *
    * @param[in]      arr        Array to iterate over
    */
    Expr_Command_Iterator (Array_Base <T> & arr);

    /// Destructor.
    ~Expr_Command_Iterator (void);

    /**
    *
    * @return          true      if current location is greater than or equal to current size
    *                  false     if current location is less than current size
    */
    bool is_done (void) const;
    
    /**
     * Increment the curr_location_
    * 
    */
    void advance (void);

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
    // reference to the array being iterated over
    Array_Base <T> & array_;

    // to keep track of the current location being accessed
    size_t curr_location_;
};


#include "Expr_Command_Iterator.cpp"

#endif   // !defined _EXPR_COMMAND_ITERATOR_H_