#include <iostream>
#include <cctype>
#include <string>

int main()
{

    unsigned int vowelCnt = 0, otherCnt = 0;
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char prevCh = '\0';
    std::string new_line;
    while (getline(std::cin, new_line))
    {
        for (auto c : new_line)
        {
            c = tolower(c);
            // std::cout << c << std::endl; // Debug
            if (prevCh == 'f' && c == 'f')
                ++ffCnt;
            if (prevCh == 'f' && c == 'l')
                ++flCnt;
            if (prevCh == 'f' && c == 'i')
                ++fiCnt;
            switch (c)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelCnt;
                break;
            case ' ':
                ++otherCnt;
                break;
            case '\t':
                ++otherCnt;
                break;
            default:
                ++otherCnt;
                break;
            }
            prevCh = c;
        }
        std::cout << "Number of Vocals in input: "
                  << vowelCnt << std::endl;
        std::cout << "Number of other in input: "
                  << otherCnt << std::endl;
        std::cout << "Number of ff in input: "
                  << ffCnt << std::endl;
    }
    return 0;
}