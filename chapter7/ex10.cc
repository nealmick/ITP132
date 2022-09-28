/*
10. Rewrite the following code fragment so that it uses the conditional operator
instead of an if statement:
*/


#include <iostream>
using namespace std;

int main()
{
   int value;
   std::cin >> value;
   int var = (value % 2 != 0) ? value+1 : value;
   std::cout << var << '\n';
}