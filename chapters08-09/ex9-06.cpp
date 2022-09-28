/*
6. Is the following a legal C ++ program?
no proc requires 2 arguments
*/

#include <iostream>

int proc(int x, int y) {
    return 2*x + y*y;
}

int main() {

    std::cout << proc(5) << '\n';
    
}