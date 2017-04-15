//
//  Screen.h
//  cplusplusLearn
//
//  Created by 李璇 on 2017/4/15.
//  Copyright © 2017年 李璇. All rights reserved.
//

#ifndef Screen_h
#define Screen_h
//每个Screen对象有长宽属性并且包含字符
//string对象有一个构造函数 string(size_t, char)
class Screen {
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    Screen(pos ht, pos wd, pos num) : height(ht), width(wd), contents(num, ' ') {}
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen move(pos r, pos c);
//    设置光标处的字符
    Screen set(char);
//    设置给定位置的字符
    Screen &set(pos, pos, char);
    Screen display(std::ostream &os) { do_display(os); return *this; };
    const Screen display(std::ostream &os) const { do_display(os); return *this; };
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const { os << contents; };
};
inline
Screen Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row + c];
}

Screen Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen &Screen::set(pos x, pos y, char c) {
    pos row = x * width;
    contents[row + y] = c;
    return *this;
}

class Windows_mgr {
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

/*class Y;
class X { Y *y; };
class Y { X x;};*/

#endif /* Screen_h */
