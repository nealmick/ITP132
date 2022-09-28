#include <iostream>
// Chapter 10 - Ex 10:
// The following function does not behave as expected:
    /*
    * (Faulty function)
    *
    * get_range
    * Establishes a range of integers. The lower value must
    *    be greater than or equal to min, and the upper value
    *    must be less than or equal to max.
    *    min is the lowest acceptable lower value.
    *    max is the highest acceptable upper value.
    *    lower is assigned the lower limit of the range
    *    upper is assigned the upper limit of the range
    */
    void get_range(int min, int max, int lower, int upper) {
        std::cout << "Please enter a data range within the bounds "
                  << min << "..." << max << ": ";
        do { // Loop until acceptable values are provided
            std::cin >> lower >> upper;
            if (lower < min)
                std::cout << lower << " is too low, please try again.\n";
            if (upper > max)
                std::cout << upper << " is too high, please try again.\n";
        } while (lower < min || upper > max);
    }



    int main(){
      int lower, upper;
      int min=5;
      int max=10;
      int* plower = &lower;
      int* pupper = &upper;
      int* pmin = &min;
      int* pmax = &max;
      get_range(*pmin,*pmax,*plower,*pupper);

    }
// (a) Modify the function so that it works using pass by reference with pointers.

// (b) Modify the function so that it works using pass by reference with
//     reference parameters.
