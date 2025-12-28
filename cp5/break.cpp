#include <iostream>
#include <string>

int main() {
    std::string curr_str;
    std::string prev_str;

    std::cout << "Please insert a string: " << std::endl;
    std::cin >> curr_str;
    
    prev_str = curr_str;

    // std::cout << "Please insert a string: " << std::endl;

    while (std::cin) 
    {
        std::cout << "Please insert a string: " << std::endl;
        std::cin >> curr_str;
        if (prev_str == curr_str)
        {
            std::cout << curr_str << " happened twice!"
                      << std::endl;
            break;
        }
        prev_str = curr_str;
    }

    return 0;
}