// -*- C++ -*-

//==============================================================================
/**
 * @file       Calculate.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */ 
//==============================================================================

#ifndef _CALCULATE_H_
#define _CALCULATE_H_

#include <string>
#include <sstream>          // for std::istringstream
#include <cctype>           // for std::isdigit () used in parsing
#include "Stack_Expr_Command_Factory.h"
#include "Expr_Command_Iterator.h"

/**
 * @class Calculate
 *
 * Facade class that ties together different parts of the program to execute the calculation of the entered expression
 * 
 */
class Calculate
{
public:
    // default constructor
    Calculate (void);

    // initialization constructor
    Calculate (std::string & str);

    // get method to access the result
    const int result (void);

    // method to reset the state of the receiver stack and the postfix array after each expression
    void reset (void);

    // method to change the infix string's value to a new expression
    void set_infix (std::string & str);

    // method to convert the infix string to postfix
    bool infix_to_postfix (void);

    // method to evaluate the result from the postfix string
    void eval_postfix (void);

private:
    // infix string
    std::string infix;

    // stack used by the factories and commands to perform the operations on
    Stack <int> receiver;

    // array to store postfix format commands
    Array <Expr_Command *> postfix;
};


#endif   // !defined _CALCULATE_H_
