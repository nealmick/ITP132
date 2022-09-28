/*
1. Consider the following code fragment.
*/



#include <iostream>
using namespace std;

int main()
{
    int x;
    std::cin >> x;
    switch (x + 3) {
        case 5:
            std::cout << x << '\n';
            break;
        case 10:
            std::cout << x - 3 << '\n';
            break;
        case 20:
            std::cout << x + 3 << '\n';
        break;
    }
}
/*
(a) What is printed when the user enters 2?
2
(b) What is printed when the user enters 5?
5
(c) What is printed when the user enters 7?
4
(d) What is printed when the user enters 17?
20
(e) What is printed when the user enters 20?
nothing
*/

