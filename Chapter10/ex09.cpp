// Chapter 10 ex9. Given the declarations:



//     indicate what each of the following code fragments will print.

#include <iostream>
int main() {
  int x, y, *p, *q;

// (a)
    p = &x;
    x = 5;
    std::cout << *p << '\n';
//5
// (b)
    x = 5;
    p = &x;
    std::cout << *p << '\n';
//5
// (c)
    p = &x;
    *p = 8;
    std::cout << *p << '\n';
//8
// (d)
    p = &x;
    q = &y;
    x = 100;
    y = 200;
    *q = *p;
    std::cout << x << ' ' << y << '\n';
    std::cout << *p << ' ' << *q << '\n';
//100 100
//100 100
// (e)
    p = &x;
    q = &y;
    x = 100;
    y = 200;
    q = p;
    std::cout << x << ' ' << y << '\n';
    std::cout << *p << ' ' << *q << '\n';
//100 200
//100 100
// (f)
    x = 5;
    y = 10;
    p = q = &y;
    std::cout << *p << ' ' << *q << '\n';
    *p = 100;
    *q = 1;
    std::cout << x << ' ' << y << '\n';
//10 10
// 5 1
// (g)
    x = 5;
    y = 10;
    p = q = &x;
    *p = *q = y;
    std::cout << x << ' ' << y << '\n';
    return 0;
  }
//10 10
