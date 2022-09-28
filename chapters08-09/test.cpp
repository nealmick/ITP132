#include <iostream>
#include <stdlib.h> 
#include <math.h>
    
int main() {

    double x, y, result;
    std::cin >> x>>y;
    result = hypot (x, y);
    std::cout<<result<<'\n';
}