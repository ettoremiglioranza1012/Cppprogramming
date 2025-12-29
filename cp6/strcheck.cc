#include <iostream>
#include <string>

// Funcs prototypes
bool any_uppercase(const std::string &str);
void make_lower(std::string &str);

int main() {
    std::string user_input;
    std::cout << "Insert a string: " << std::endl;
    std::cin >> user_input;
    if (any_uppercase(user_input))
        std::cout << "No upper case in input" << std::endl;
    else
        std::cout << "Upper case detected" << std::endl;
        make_lower(user_input);
        std::cout << "To lower: " << user_input << std::endl;
    return 0;
}

bool any_uppercase(const std::string &str) {
    for (char c : str) {
        if (isupper(c))
            return false;
    }
    return true;
}

void make_lower(std::string &str) {
    for (auto &c : str) {
        c = tolower(c);
    }
    return;
}
