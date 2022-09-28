/*
4. What is printed by the following code fragment?
20
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    do {
        std::cout << x << " ";
        x++;
    } while (x < 10);
    std::cout << '\n';
}