
#include <iostream>
#include <string>
#include "Sales_item.h"

int main()
{
    Sales_item prev_item, curr_item;
    // Identify the file's item ISBN
    if (std::cin >> curr_item) {
        prev_item = curr_item;
        size_t count = 1;
        while (std::cin >> curr_item) {
            if (curr_item.isbn() == prev_item.isbn()) {
                ++count;
                prev_item = curr_item;
            } else {
                std::cout << "Item " << prev_item.isbn() 
                    << " has count " << count << std::endl;
                count = 1;
                prev_item = curr_item;
            }
        }
        std::cout << "Item " << prev_item.isbn() 
            << " has count " << count << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1; // Indicate failure
    }
    return 0;
}
