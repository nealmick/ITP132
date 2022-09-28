/*
3. What is printed by the following code fragment?
0 1 2 3 4 5 6 7 8 9
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    do {
        std::cout << x << " ";
        x++;
    } while (x < 10);
    std::cout << '\n';
}