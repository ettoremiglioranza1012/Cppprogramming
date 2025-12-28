#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    std::string str1;
    std::string str2;

    do
    {
        std::cout << "Insert 2 string:" << std::endl;
        
        std::cin >> str1;
        if (str1 == "quit") break;
        std::cin >> str2;
        if (str2 == "quit") break;
        
    
        if (str1 == str2)
            std::cout << "Input strings are equal"
                      << std::endl;
        else
            std::cout << ((str1.size() > str2.size()) ? str1 : str2)
                      << " is the winner"
                      << std::endl;
    } while (cin);

    return 0;
}