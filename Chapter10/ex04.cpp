// Chapter 10 ex4.  Consider the following C ++ code:

    #include <iostream>
        int max(int n) {
        return n;
    }

    int max(int m, int n) {
        return (m >= n)? m : n;
    }

    int max(int m, int n, int r) {
        int x = m;
        if (n > x)
            x = n;
        if (r > x)
            x = r;
        return x;
    }

    int main() {
        std::cout << max(4) << '\n';
        std::cout << max(4, 5) << '\n';
        std::cout << max(5, 4) << '\n';
        std::cout << max(1, 2, 3) << '\n';
        std::cout << max(2, 1, 3) << '\n';
        std::cout << max(2, 1, 2) << '\n';
    }

// (a) Is the program legal since there are three different functions named max?
//yes
// (b) What does the program print?
4
5
5
3
3
2
