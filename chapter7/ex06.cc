/*
6. Rewrite the following code fragment so that a switch is used instead of the 
if/else statements.  
*/
#include <iostream>
using namespace std;

int main()
{
    int value;
    char ch;

    std::cin >> ch;
    switch(ch){
        case'A':
            value = 10;
            break;
        case'P':
            value = 20;
            break;
        case'T':
            value = 30;
            break;
        case'V':
            value = 40;
            break;
        default:
            value = 50;
    }
    std::cout << value << '\n';
}