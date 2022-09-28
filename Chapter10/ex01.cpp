//1. Consider the following C ++ code:

#include <iostream>

int sum1(int n) {
       int s = 0;
       std::cout << "input 1: " << n << '\n';
       while (n > 0) {
              s++;
              n--;
       }
       return s;

}

int input;

int sum2() {
       int s = 0;
       std::cout << "input 2: " << input << '\n';
       while (input > 0) {
              s++;
              input--;
       }
       return s;

}

int sum3() {
       std::cout << "input 3: " << input << '\n';
       int s = 0;
       for (int i = input; i > 0; i--)
              s++;
       return s;

}

// a. What is printed if main is written as follows?
// 5 5 0

int main() {
    input = 5;
    std::cout << sum1(input) << '\n';
    std::cout << sum2() << '\n';
    std::cout << sum3() << '\n';

}

// b. What is printed if main is written as follows?
// 5 5 5

int main() {
    input = 5;
    std::cout << sum1(input) << '\n';
    std::cout << sum3() << '\n';
    std::cout << sum2() << '\n';

}



// c. What is printed if main is written as follows?
//5 0 0
int main() {
    input = 5;
    std::cout << sum2() << '\n';
    std::cout << sum1(input) << '\n';
    std::cout << sum3() << '\n';

}


// (d) Which of the functions sum1, sum2, and sum3 produce a side effect?
//     int sum2() itterates on input variable which leaves future uses of the variables value 0.
//     What is the side effect? int sum3() does not get input.
// (e) Which function may not use the input variable? int sum3() does not get input.
// (f) What is the scope of the variable input? What is its lifetime? global lifeitme forever.... the variable value gets messed up but it still exists.
// (g) What is the scope of the variable i? What is its lifetime? local its just the iterator very small scope and lifetime only used within for loop....
// (h) Which of the functions sum1, sum2, and sum3 manifest good functional
//     independence? Why?
//      i like sum1 so long as you have the variable input.  otherwise sum2 and sum3 rely on a global variable input.
