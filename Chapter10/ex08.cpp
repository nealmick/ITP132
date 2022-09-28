// Chapter 10 ex8. What is printed by the following code fragment?

#include <iostream>
int main() {
    int x = 5, y = 3, *p = &x, *q = &y;

    std::cout << "x = " << x << ", y = " << y << '\n';
    x = y;
    std::cout << "x = " << x << ", y = " << y << '\n';
    x = 7;
    std::cout << "x = " << x << ", y = " << y << '\n';
    *p = 10;
    std::cout << "x = " << x << ", y = " << y << '\n';
    p = q;
    *p = 20;
    std::cout << "x = " << x << ", y = " << y << '\n';
}
x = 5, y = 3
x = 3, y = 3
x = 7, y = 3
x = 10, y = 3
x = 10, y = 20
