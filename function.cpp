//
//  function.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/24.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <vector>
#include <stdexcept>
#include "function.h"
/*第六章 函数*/
using std::cin; using std::cout; using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::runtime_error;

//求阶乘的函数，val接受要求阶乘的值
int fact(int val) {
    int rel = 1;
    while (val > 1) {
        rel *= val--;
    }
    
    return rel;
}

//有交互过程的求解阶乘的函数，返回用户输入值的函数
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

//递归求阶乘，好像不太规范
int recursionFact(int val) {
    if(val == 0 || val == 1) {
        return 1;
    } else {
        return fact(--val) * (val + 1);
    }
}

//返回一个数的绝对值
double absolutValue(double val) {
    if(val >= 0)
        return val;
    else
        return -val;
}

//包含形参、局部变量、局部静态变量的一个函数
size_t unmeaning(size_t val) {
    size_t ui = 1;
    static size_t x = 0;
    return val + ui + ++x;
}

//这个函数第一次被调用返回值为0，之后每次被调用返回值加1
unsigned staticTest() {
    static unsigned rel = 0;
    return rel++;
}

int function(int argc, const char * argv[]) {
    
    for(int i = 0; i < 10; ++i) {
        cout << staticTest() << endl;
    }
    
    return 0;
}

