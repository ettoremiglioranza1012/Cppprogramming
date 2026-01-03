#include <iostream>
#include "screen.h"

int main()
{
    Screen myScreen(std::cin);
    myScreen.display(std::cout);

    return 0;
}