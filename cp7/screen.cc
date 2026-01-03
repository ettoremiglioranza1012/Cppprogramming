#include <iostream>
#include "screen.h"

std::istream& read(std::istream& is, Screen& item)
{
    Screen::pos h = 0, w = 0;
    char c;
    is >> item.height >> item.width >> c;
    item.contents = std::string(item.height*item.width, c);
    return is; 
}

void Screen::do_display(std::ostream &os) const 
{
    pos i,j,k;
    k = 0;
    for (i = 0; i < height; ++i) {
        for (j = 0; j < width; ++j) {
            os << contents[k];
            ++k;
        }
        os << std::endl;
    }
}

void Window_mgr::clear(ScreenIndex i) 
{
    Screen &s = screens[i];
    s.contents = std::string(s.height*s.width, ' '); 
}

Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s) 
{
    screens.push_back(s);
    return screens.size() - 1;
}