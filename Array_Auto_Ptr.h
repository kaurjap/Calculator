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

#ifndef _ARRAY_AUTO_POINTER_H_
#define _ARRAY_AUTO_POINTER_H_


/**
 * @class Array_Auto_Ptr
 *
 * This is a pure abstract class. 
 * Provide the common implement of all the commands in this abstract class.
 */
template <typename T>
class Array_Auto_Ptr
{
public:

    // constructor
    Array_Auto_Ptr (void);

    // initialization constructor
    Array_Auto_Ptr (T * ptr);

    // destructor
    ~Array_Auto_Ptr (void);

    /**
    * 
    * 
    */
    T * operator -> (void);

    /**
     * 
     */ 
    T & operator * (void);

    /**
     * 
     */
    operator T * (void);

    /**
     * 
     */
    T & operator [] (int i);  

protected:
    // pointer to the data
    T * ptr_;
};

// include implementation file
#include "Array_Auto_Ptr.cpp"

#endif   // !defined _ARRAY_AUTO_POINTER_H_
