#include <iostream>

int main(void)
{
    int upper_bound = 0, lower_bound = 0;
    std::cout << " Insert two numbers " << std::endl;
    std::cin >> lower_bound >> upper_bound;
    int i = lower_bound;
    while (i >= lower_bound && i <= upper_bound)
    {
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}
