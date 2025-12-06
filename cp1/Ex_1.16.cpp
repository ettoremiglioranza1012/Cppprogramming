#include <iostream>

int main(void)
{
    int curr_value;
    int sum = 0;
    while (std::cin >> curr_value)
    {
        sum += curr_value;
    }    
    std::cout << "The sum of the input is " << sum << std::endl;
    return 0;
}
