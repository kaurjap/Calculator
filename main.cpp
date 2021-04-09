// -*- C++ -*-

#include <iostream>
#include <string>
#include <sstream>          // for std::istringstream

//#include "Stack_Expr_Command_Factory.h"
//#include "Expr_Command_Iterator.h"

int main (int argc, char * argv [])
{
    // get input from the user and store it in the infix string variable
    // default token is a space, so use getlin
    std::string infix;
    std::cout << "Please enter your expression: " << std::endl;
    std::getline(std::cin, infix);

    std::cout << infix;

    /*
    // stack on which the operations will be performed
    Stack <int> stack;

    // convert from the infix format to the postfix format i.e. an array of command * in postfix format
    Stack_Expr_Command_Factory factory (stack);    // factory is what creates the commands
    Array <Expr_Command *> postfix;                 // array where the postfix commands are stored
    // infix_to_postfix ();

    // now the postfix array is an array of commands in the postfix format
    // hence, execute each command to compute the result
    typedef Expr_Command_Iterator <Expr_Command *> iterator;
    for (iterator iter (postfix); !iter.is_done (); iter.advance ()) {
        (*iter)->execute ();
    } // end for

    int result = stack.top();

    std::cout << "Result: " << result << std::endl;
    */
    return 0;
} // end main