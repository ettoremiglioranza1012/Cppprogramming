#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <cassert>
#include "person.h"

int main() {
    std::ifstream input_file("person_input.txt");

    if (!input_file) {
        std::cerr << "Error: Cannot read the input file"
                  << std::endl;
        return 1;
    }

    Person family("Family");
    std::string line;
    bool is_first = true;
    while(getline(input_file, line)) {
        // Processing current line data
        std::cout << "Processing: " << line << std::endl;
        std::istringstream line_stream(line); // Wrap the string in a stream
        Person curr_pers(line_stream);
        
        // Assigning family address with the first person address record
        if (is_first) {
            family.new_address(curr_pers.get_address());
            is_first = false;
        }
        
        // Cumulative calculation of family wealth
        family.increase_deposit(curr_pers.get_deposit());
    }
    print(std::cout, family) << std::endl;

    return 0;
}