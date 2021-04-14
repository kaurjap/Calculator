// -*- C++ -*-

#include <iostream>
#include <string>
#include <sstream>          // for std::istringstream

#include "Stack_Expr_Command_Factory.h"
#include "Expr_Command_Iterator.h"

// function prototypes
bool infix_to_postfix (const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix);


int main (int argc, char * argv [])
{
    // get input from the user and store it in the infix string variable
    // default token is a space, so use getline
    std::string infix;

    // while loop to keep executing until quit
    bool quit = false;
    while (quit == false) {
        std::cout << "Please enter your expression: " << std::endl;
        std::getline(std::cin, infix);
        std::cout << std::endl;
        
        if (infix == "QUIT") {
            quit = true;
        } else {
            // stack on which the operations will be performed
            Stack <int> receiver;

            std::cout << "print 1 \n";

            // convert from the infix format to the postfix format i.e. an array of command * in postfix format
            Stack_Expr_Command_Factory factory (receiver);    // factory is what creates the commands
            Array <Expr_Command *> postfix;                 // array where the postfix commands are stored
            infix_to_postfix (infix, factory, postfix);

            std::cout << "print 2 \n";

            // execute each command to compute the result
            typedef Expr_Command_Iterator <Expr_Command *> Iterator;
            for (Iterator iter (postfix); !iter.is_done (); iter.advance ()) {
                (*iter)->execute ();
            } // end for

            std::cout << "print 3\n";

            int result = receiver.top();

            std::cout << "print 4\n";
            std::cout << "Result: " << result << std::endl;
        } // end if-else  

    } // end while

    return 0;
} // end main


// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.


/**
 * PRIORITY OF COMMANDS: (larger = greater precedence)
 * Numbers = 0 (not an operator)
 * Paranthesis = 10 (for open paranthesis)
 *               11 (for closed paranthesis)
 * Addition = 1
 * Subtraction = 1
 * Multiplication = 2
 * Division = 2
 * Modulus = 2 
 */

// method to perform the actual parsing of the user input to create an array of commands that are executable
bool infix_to_postfix (const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix)
{

    std::istringstream input(infix); // parser
    input.clear();      // clear the error state of the parser stream just in case
    std::string token;
    int number;
    Stack <Expr_Command *> temp_stack;    // stack where all the commands will be pushed temporarily
    Expr_Command * command = 0;
    while (!input.eof ()) {
        // parsing
        input >> number;
        if (!input.fail()) {
            // the current token is a number
            command = factory.create_number_command (number);
        } else if (input.fail()) {
            // the current token is not a number
            input.clear(); // clear the error bit and continue parsing
            input >> token;
            if (token == "+") {
                command = factory.create_add_command ();
            } else if (token == "-") {
                command = factory.create_subtract_command ();
            } else if (token == "*") {
                command = factory.create_multiply_command ();
            } else if (token == "/") {
                command = factory.create_divide_command ();
            } else if (token == "%") {
                command = factory.create_modulus_command ();
            } else if (token == "(") {
                command = factory.create_open_paranthesis_command ();
            } else if (token == ")") {
                command = factory.create_closed_paranthesis_command ();
            } else {
                return false; // input not valid
            } // end if-else
        } // end if-else

        size_t size_counter = 0;
        // pushing the commands on the stack based on the infix to postfix algorithm
        int precedence = command->precedence ();
        if (precedence == 0 || precedence == 10) {
            // command is either a number or an open paranthesis
            temp_stack.push (command);
        } else if (precedence == 11) {
            // command is a closed paranthesis
            while (!temp_stack.is_empty () && temp_stack.top ()->precedence () != 10) {
                // while a matching open paranthesis is not found, pop from the stack and add to the postfix array
                if (postfix.size () <= size_counter) {
                    postfix.resize (size_counter + 5);
                } // end if
                
                postfix [size_counter] = temp_stack.pop ();
                size_counter ++;
            } // end while
            // also pop the ( expression
            temp_stack.pop ();
        } else {
            // other operators: +, -, *, /, %
            while (!temp_stack.is_empty () && precedence <= temp_stack.top ()->precedence ()) {
                if (postfix.size () <= size_counter) {
                    postfix.resize (size_counter + 5);
                } // end if
                
                postfix [size_counter] = temp_stack.pop ();
                size_counter ++;
            } // end while

            // now push the current command
            temp_stack.push (command);
        } // end if-else
    } // end while

    return true;
} // end infix_to_postfix
