/*
8. Is the following a legal C ++ program?
no requires type for proc or void....
*/

#include <iostream>

proc(int x) {
    std::cout << 2*x*x << '\n';
}

int main() {
    
    proc(5);
    
}