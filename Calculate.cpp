// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Calculate.h"

Calculate::Calculate (void)
    : infix ("NaN")
{

} // end default constructor


Calculate::Calculate (std::string & str)
    : infix (str)
{

} // end initializing constructor


const int Calculate::result (void)
{
    return receiver.top ();
} // end result


void Calculate::reset (void)
{
    postfix.resize (0);
    receiver.clear ();
} // end reset 


void Calculate::set_infix (std::string & str)
{
    infix = str;
} // end set_infix


/**
 * reference to understand the method below
 * 
 * PRIORITY OF COMMANDS: (larger = greater precedence)
 * Numbers = 0 (not an operator)
 * Paranthesis = -1 (for open paranthesis)
 *               -2 (for closed paranthesis)
 * Addition = 1
 * Subtraction = 1
 * Multiplication = 2
 * Division = 2
 * Modulus = 2 
 */
bool Calculate::infix_to_postfix (void)
{
    // initializations
    std::stringstream parser(infix);
    parser.clear();     // clear the error state of the parser stream just in case
    std::string token;
    int number;
    Stack_Expr_Command_Factory factory (receiver);
    Stack <Expr_Command *> temp_stack;  // stack where all the commands will be pushed temporarily
    Expr_Command * command = 0;
    size_t size_counter = 0;   // counter to keep track of the size of the array and add elements

    while (!parser.eof ()) {
        // parsing
        parser >> token;
        if (std::isdigit (token[0])) {
            // the current token is a number
            std::cout << "print 11: token: " << token << "\n";
            std::istringstream ss(token); // to convert from string to number
            ss >> number;
            command = factory.create_number_command (number);
        } else {
            // the current token is not a number
	        std::cout << "print 12: Token: " << token << "\n";
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

        // pushing the commands on the stack based on the infix to postfix algorithm
        int precedence = command->precedence ();
        std::cout << "precedence: " << precedence << std::endl;
        if (precedence == 0) {
            // command is either a number
            if (postfix.size () <= size_counter) {
                postfix.resize (size_counter + 5);
            } // end if

            postfix [size_counter] = command;
            size_counter ++;
        } else if (precedence == -1) {
            // command is an open paranthesis
            temp_stack.push (command);
        } else if (precedence == -2) {
            // command is a closed paranthesis
            while (!temp_stack.is_empty () && temp_stack.top ()->precedence () != -1) {
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

    // pop the remaining operators from the stack and add to postfix
    while (!temp_stack.is_empty ()) {
        if (postfix.size () <= size_counter) {
            postfix.resize (size_counter + 5);
        } // end if
        postfix [size_counter] = temp_stack.pop ();
        size_counter ++;
    } // end while

    postfix.resize (size_counter); // resize postfix to its true size i.e. how many commands
    return true;
} // end infix_to_postfix


void Calculate::eval_postfix (void)
{
    // execute each command to compute the result
    typedef Expr_Command_Iterator <Expr_Command *> Iterator;
    for (Iterator iter (postfix); !iter.is_done (); iter.advance ()) {
        (*iter)->execute ();
    } // end for
} // end eval_postfix