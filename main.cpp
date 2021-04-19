// -*- C++ -*-

#include <iostream>
#include "Calculate.h"

template <typename T>
void print (Stack <T> stack) {
    std::cout << "\n------- STACK ---------\n";
    size_t size = stack.size();
    //std::cout << "size: " << stack.size() << std::endl;
    for (size_t i = 0; i < size; ++i) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    } // end for
    std::cout <<"-------------------------- \n";
 } // end print


int main (int argc, char * argv [])
{
    // get input from the user and store it in the infix string variable
    // default token is a space, so use getline
    std::string infix;
    // make an instance of the Calculate facade that facilitates the execution of the calculations
    Calculate calculator;

    // while loop to keep executing until quit
    bool quit = false;
    while (quit == false) {
        std::cout << "Please enter your expression: " << std::endl;
        std::getline(std::cin, infix);
        std::cout << std::endl;

        calculator.set_infix (infix);

        if (infix == "QUIT") {
            quit = true;
        } else {
            std::cout << infix;

            // convert from the infix format to the postfix format i.e. an array of command * in postfix format
            // proceed if the input is valid
            if (calculator.infix_to_postfix ()) {
                // evaluate the postfix expression
                calculator.eval_postfix ();

                // access the result
                int result = calculator.result ();
                std::cout << "Result: " << result << std::endl;

            } else {
                std::cout << "Invalid input entered. Please try again." << std::endl;
                quit = true;
            } // end if-else

            // clear the state of the calculator to reset for the next run
            calculator.reset ();
        } // end if-else  

    } // end while
    return 0;
} // end main


// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.
// SOLUTION  Dr. Hill, I resolved this error by creating a wrapper facade
// class named "Calculate" which executes the task of parsing, converting
// the infix to postfix, and evaluate the postfix. It further facilitates the 
// calculation of the expression entered by the user by providing helper 
// methods for getting the result, changing the infix value, etc. Hence, I
// removed the those methods from here and included their implementation in
// facade class.