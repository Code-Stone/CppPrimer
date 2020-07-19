# include <iostream>
# include <string>
# include <vector>

// Window_mgr
class Window_mgr {
    public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex); // Window_mgr::clear必须在Screen类之前声明！

    private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}


class Screen {
    // friend class Window_mgr; // 将整个Window_mgr作为友元类
    friend void Window_mgr::clear(ScreenIndex); 

    public:
    // typedef std::string::size_type pos;
    using pos = std::string::size_type;

    // Constructors
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    // Member funtions
    char get() const;
    char get(pos ht, pos wd) const; // 声明时既可以说明inline也可以只在定义的时候说明
    Screen &move(pos r, pos c);

    Screen &set(char);
    Screen &set(pos, pos, char);

    Screen &display(std:: ostream &os) {
        do_display(os); 
        return *this;
    }
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }

    private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &os) const {os << contents;}
};

inline Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline char Screen::get() const {return contents[cursor];}

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;
}


int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout<< "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
    return 0;
}