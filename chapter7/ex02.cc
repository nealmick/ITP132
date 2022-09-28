/*
2. Consider the following code fragment.
*/
#include <iostream>
using namespace std;

int main()
{
    char ch;
    std::cin >> ch;
    switch (ch) {
        case 'a':
            std::cout << "*\n";
            break;
        case 'A':
            std::cout << "**\n";
            break;
        case 'B':
        case 'b':
            std::cout << "***\n";
        case 'C':
        case 'c':
            std::cout << "****\n";
            break;
        default:
            std::cout << "*****\n";
    }
}
/*
(a) What is printed when the user enters a?
*
(b) What is printed when the user enters A?
**
(c) What is printed when the user enters b?
***
****
(d) What is printed when the user enters B?
***
****
(e) What is printed when the user enters C?
****
(f) What is printed when the user enters c?
****
(g) What is printed when the user enters t?
*****
*/
