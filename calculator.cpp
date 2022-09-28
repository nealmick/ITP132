#include <iostream>
#include <cmath>

/*
  Assingment:

  1. Add the ability to multiply two numbers. Create a multiply function to do so.
  2. Add the ability to divide two numbers. Create a divide function to do so.
     Your function should not allow division by zero.
  3. Update the current functions to support the new functionality you have added.

*/

// internal function declarations . . .
void    help_screen();
char    menu();
double    multiply(double arg1, double arg2);
double    divide(double arg1, double arg2);
/*
* main
*    Runs a command loop that allows users to
*    perform simple arithmetic.
*/

int main() {

     double result = 0.0, arg1, arg2;
     bool done = false; // Initially not done

     do {
          switch (menu()) {
            case 'A': // Addition
            case 'a':
                 std::cin >> arg1 >> arg2;
                 result = arg1 + arg2;
                 std::cout << result << '\n';
                 break;
            case 'S': // Subtraction
            case 's':
                 std::cin >> arg1 >> arg2;
                 result = arg1 - arg2;
                 std::cout << result << '\n';
                 break;
            case 'M': //
            case 'm':
                 std::cin >> arg1 >> arg2;
                 result = multiply(arg1, arg2);
                 //std::cout << result << '\n'; //if want to print for m
                 break;
            case 'D': //
            case 'd':
                 std::cin >> arg1 >> arg2;
                 result = divide(arg1, arg2);
                 //std::cout << result << '\n'; //if want to print for d
                 break;
            case 'P': // Print result
            case 'p':
                 std::cout << result << '\n';
                 break;
            case 'H': // Display help screen
            case 'h':
                 help_screen();
                 break;
            case 'Q': // Quit the program
            case 'q':
                 done = true;
                 break;

          } // end-switch
     } while (!done);

} // end-main

/*
* help_screen
*     Displays information about how the program work
*     Accepts no parameters
*     Returns nothing
*/
void help_screen() {
     std::cout << "Add: Adds two numbers\n";
     std::cout << "          Example: a 2.5 8.0\n";
     std::cout << "Subtract: Subtracts two numbers\n";
     std::cout << "          Example: s 10.5 8.0\n";
     std::cout << "multiply: multiply two numbers\n";
     std::cout << "          Example: m 10.5 8.0\n";
     std::cout << "divide: divide two numbers\n";
     std::cout << "          Example: d 10.5 8.0\n";
     std::cout << "Print: Displays the result of the latest operation\n";
     std::cout << "          Example: p\n";
     std::cout << "Help: Displays this help screen\n";
     std::cout << "          Example: h\n";
     std::cout << "Quit: Exits the program\n";
     std::cout << "          Example: q\n";
} // end-help_screen

/*
* menu
*    Display a menu
*    Accepts no parameterss
*    Returns the character entered by the user.
*/

char menu() {
     // Display a menu
     std::cout << "=== A)dd S)ubtract M)ultiply D)ivide P)rint H)elp Q)uit ===\n";
     // Return the char entered by user
     char ch;
     std::cin >> ch;
     return ch;
} // end-menu


double multiply(double arg1, double arg2){
     return arg1*arg2;
}

double divide(double arg1, double arg2){
     if(arg2 !=0){
          return arg1/arg2;
     }
     return 0;
}
