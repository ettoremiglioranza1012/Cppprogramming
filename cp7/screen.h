#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>
#include <iostream>

// Forward declarations
class Screen;
class Window_mgr;
std::istream& read(std::istream& is, Screen& item);

class Screen {
    friend class Window_mgr;  // Make Window_mgr a friend so it can access private members
    friend std::istream& read(std::istream& is, Screen& item);
    public:
        using pos = std::string::size_type;
        // constructor
        /* 
        Screen() = default;
        Screen(pos ht, pos wd): 
            height(ht), width(wd), contents(ht*wd, ' ') { } 
        Screen(pos ht, pos wd, char c): 
            height(ht), width(wd), contents(ht*wd, c) { }
        */
        // Non-delegeting constructor
        Screen(pos ht, pos wd, char c): 
            height(ht), width(wd), contents(ht*wd, c) { }
        // Delegating constructors
        Screen() : Screen(0,0,' ') { }
        Screen(std::istream &is) : Screen() 
                                    { read(is, *this); }

        // public member functions
        char get() const { return contents[cursor]; } 
        char get(pos, pos) const;
        Screen &move(pos, pos);
        Screen &set(char);
        Screen &set(pos, pos, char);
        Screen &display(std::ostream &os)
            { do_display(os); return *this; }
        const Screen &display(std::ostream &os) const
            { do_display(os); return *this; }
    private:
        void do_display(std::ostream &os) const;
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        // mutable size_t access_ctr = 0;
};

// Window_mgr defined after Screen so it can use the complete type
class Window_mgr {
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear(ScreenIndex);
        ScreenIndex addScreen(const Screen&);
    private:
        std::vector<Screen> screens{Screen(24, 80, ' ')};
};

inline
char Screen::get(pos r, pos c) const 
{
    pos row = r * width;
    return contents[row + c];
}

inline 
Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;   
    return *this;
}

inline
Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
} 

inline
Screen &Screen::set(pos r, pos col, char ch) 
{
    contents[r*width+col] = ch;
    return *this;
}

#endif