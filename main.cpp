// -*- C++ -*-

#include <iostream>
#include "Calculate.h"


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

// PLEASE NOTE: The following was a comment provided by Dr. Hill in my Open and Closed Paranthesis 
// Command files which I disregarded while solving the problem mentioned in the comment

// COMMENT: Create a design that does not require having parenthesis as
// as command object since parenthesis are not executed.
// SOLUTION Dr. Hill, I implemented the template method pattern to make a Binary
// Command class the includes the common behavior of the binary sub class commands.
// While doing that, I also realized that the only reason I had created Open Paranthesis
// and Closed Paranthesis Objects was to keep track of their precedence value to distinguish
// them. This could have been done using the Expr_Command class i.e. the base of all classes.
// Since, I was a partially abstract class, and not a pure abstract class, it could've been
// instntiated. Hence, I created an instance of that to keep track of the precedence and managed
// the parantheses that way.