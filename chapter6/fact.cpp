//
//  fact.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/25.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include <stdio.h>
#include "function.h"
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using std::cin; using std::cout; using std::cerr;
using std::endl;
using std::string;

int fact(int val) {
    int rel = 1;
    while (val > 1) {
        rel *= val--;
    }
    
    return rel;
}

int mutualFact() {
    int val, rel = 1;
    cout << "Please enter a number: " << endl;
    if(cin >> val) {
        if(val == 0) {
            return rel;
        } else {
            while (val > 1) {
                rel *= val--;
            }
            return rel;
        }
    } else {
        cout << "Something wrong..." << endl;
        return 0;
    }
}

int recursionFact(int val) {
    if(val == 0 || val == 1) {
        return 1;
    } else {
        return fact(val - 1) * val;
    }
}


double absolutValue(double val) {
    if(val >= 0)
        return val;
    else
        return -val;
}

size_t unmeaning(size_t val) {
    size_t ui = 1;
    static size_t x = 0;
    return val + ui + ++x;
}


unsigned staticTest() {
    static unsigned rel = 0;
    return rel++;
}

void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

string::size_type find_char(const string &str, char c, string::size_type &occur) {
    auto ret = str.size();
    occur = 0;
    for (decltype(ret) i = 0; i != str.size(); ++i) {
        if(str[i] == c) {
            if(ret == str.size())
                ret = i;
            ++occur;
        }
    }
    
    return ret;
}

void swapRefer(int &i1, int &i2) {
    int temp;
    temp = i1;
    i1 = i2;
    i2 = temp;
}

bool containUpper(const string &str) {
    auto beg = str.begin();
    while (beg != str.end()) {
        if(isupper(*beg)) {
            return true;
        } else {
            return false;
        }
    }
    
    return false;
}

string changeToLower(string &str) {
    for (auto &c : str) {
        c = tolower(c);
    }
    
    return str;
}

int compare(int ival, const int *p) {
    if (ival > *p) {
        return ival;
    } else {
        return *p;
    }
}

void swapPointerWithRefer(int *&p1, int *&p2) {
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

void swapPointerWithPointer(int **p1, int **p2) {
    int *temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void printWithInteger(const int *ia, int val) {
    if(ia) {
        while (*ia != val) {
            cout << *ia << endl;
            ++ia;
        }
    }
}

void pringWithPointer(const int *beg, const int *end, int val) {
    for (; beg != end; ++beg) {
        if(*beg != val) {
            cout << *beg << endl;
        }
    }
}
void printWithFor(const int ia[], size_t n, int val) {
    for(size_t i = 0; i != n; ++i) {
        if(ia[i] != val) {
            cout << ia[i] << endl;
        }
    }
}

unsigned calArgvSum(initializer_list<int> il) {
    auto beg = il.begin();
    auto end = il.end();
    unsigned sum = 0;
    while (beg != end) {
        sum += *beg;
        ++beg;
    }
    
    return sum;
}

//测试当return没有返回值和函数缺少return值的函数
/*bool str_subrange(const string &str1, const string &str2) {
    if(str1.size() == str2.size())
        return str1 == str2;
    auto size = str1.size() < str2.size() ? str1.size() : str2.size();
    for (decltype(str1.size()) i = 0; i < size; ++i) {
        if(str1[i] != str2[i]) {
            return 0;
        }
    }
}*/

int &get(int *p, int index) {
    return p[index];
}

void printVectorWithRecursion(const vector<string> &vec, vector<string>::size_type index) {
    if(index > 0) {
        cout << vec[index] << endl;
        printVectorWithRecursion(vec, index - 1);
    } else
        cout << vec[index] << endl;
}

//在函数声明文件中只需要声明返回类型即可，定义文件中可以用不同的方式声明返回类型
//c++不允许重复定义,头文件中声明好的函数没有定义，编译器会报错
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd) &arrPtr(int i) {
    return i % 2 == 0 ? odd : even;
}

