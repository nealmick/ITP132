// 11. Classify the following functions as pure or impure. x is a global
//     variable and LIMIT is a global constant.

// (a)impure
    int f1(int m, int n) {
       return 2*m + 3*n;
    }

// (b) pure
    int f2(int n) {
       return n - LIMIT;
    }

// (c)impure
    int f3(int n) {
       return n - x;
    }

// (d) pure
    void f4(int n) {
       std::cout << 2*n << '\n';
    }

// (e) impure
    int f5(int n) {
       int m;
       std::cin >> m;
       return m * n;
    }

// (f)impure
    int f6(int n) {
       int m = 2*n, p;
       p = 2*m - 5;
       return p - n;
    }
