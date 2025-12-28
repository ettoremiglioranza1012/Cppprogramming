#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    vector<int> ivec1 (10, 1);
    vector<int> ivec2 (9, 1);

    if (ivec1.size() <= ivec2.size()) // ivec2 > ivec1 -> only ivec1 can be a prefix
    {
        bool ivec1_is_prefix = true;
        auto ix = ivec2.cbegin();
        for (auto it = ivec1.cbegin(); it!=ivec1.cend() && ivec1_is_prefix; ++it, ++ix)
        {
            if (*it != *ix) 
            {
                ivec1_is_prefix = false;
                std::cout << "ivec1 not a prefix of ivec2" << std::endl;
                break;
            }
        }
        if (ivec1_is_prefix) 
            std::cout << "ivec1 is prefix of ivec2" << std::endl;
    } 
    else // ivec1 > ivec2 -> only ivec2 can be a prefix
    {
        bool ivec2_is_prefix = true;
        auto ix = ivec1.cbegin();
        for (auto it = ivec2.cbegin(); it!=ivec2.cend() && ivec2_is_prefix; ++it, ++ix)
        {
            if (*it != *ix) 
            {
                ivec2_is_prefix = false;
                std::cout << "ivec2 not prefix of ivec1" << std::endl;
                break;
            }
        }
        if (ivec2_is_prefix) 
            std::cout << "ivec2 is prefix of ivec1" << std::endl;
    }

    return 0;
}