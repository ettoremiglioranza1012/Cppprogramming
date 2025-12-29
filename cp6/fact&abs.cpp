#include <iostream>

int fact(int n) {
    int ret = 1;
    while (n > 0) {
        ret *= n;
        --n;
    }
    return ret;
}

int my_abs(signed int n) {
    if (n < 0) {
        n = -(n);
        return n; 
    } else {
        return n;
    }
}

int main() {
    signed int i;
    std::cout << "Insert an interger:" << std::endl;
    std::cin >> i;
    unsigned int abs_of_i = abs(i); 
    std::cout << "ABS of the input integer is " << abs_of_i << std::endl;
    int ifact = fact(abs_of_i);
    std::cout << "Factorial of " << abs_of_i << " is " << ifact << std::endl;
    return 0;
}