// Chapter 10 ex3.
// 3. The following C ++ program is split up over three source files.

// The first file, counter.h , consists of

    int read();
    int increment();
    int decrement();

// The second file, counter.cpp , contains

    static int count;
        int read() {
        return count;
    }

    int increment() {
        if (count < 5)
            count++;
    }

    int decrement() {
        if (count > 0)
            count--;
    }

// The third file, main.cpp , is incomplete:

    #include <iostream>
    #include "counter.h"
    int main() {
        // Add code here
        increment();
        increment();
        increment();
        std::cout << read() << '\n';
        decrement();
        std::cout << read() << '\n';
        increment();
        increment();
        std::cout << read() << '\n';
    }

// (a) Add statements to main that enable it to produce the following output:
// 3
// 2
// 4

// The restriction is that the only ouput statement you are allowed to use
// (three times) is std::cout << read() << '\n';

// (b) Under the restriction of using the same output statement above, what
// code could you add to main so that it would produce the following output?
// 6
/*
for(int i = 0; i<6;i++){
  increment();
}
std::cout << read() << '\n';
*/
