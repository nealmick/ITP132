// Chapter 10: exercise 2

#include <iostream>

int next_int1() {
       static int cnt = 0;
       cnt++;
       return cnt;

}

int next_int2() {
       int cnt = 0;
       cnt++;
       return cnt;

}

int global_count = 0;

int next_int3() {
       global_count++;
       return global_count;

}

int main() {
       for (int i = 0; i < 5; i++)
              std::cout << next_int1() << " "
                        << next_int2() << " "
                        << next_int3() << '\n';

}

// (a) What does the program print? a count varible or 3 at the same time but one docent work right.
// (b) Which of the functions next_int1, next_int2, and next_int3 is the best
//     function for the intended purpose? Why?
        //3 uses a global variable, where as 1 uses a static variable, 1 i think is better.
        //they both have similar scope except int global_count was declared lower.
// (c) What is a better name for the function named next_int2?
        //always return 1
// (d) The next_int3 function works in this context, but why is it not a good
//     implementation of a function that always returns the next largest integer?
//      rely's on global_count integer.
