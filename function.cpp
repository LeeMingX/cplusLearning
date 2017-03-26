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

int main(int argc, const char * argv[]) {
    
    /*int i1,i2;
    cout << "Enter two numbers: " << endl;
    cin >> i1 >> i2;
    int *p1 = &i1, *p2 = &i2;
    swap(p1, p2);
    cout << "The result behind exchange is: " << "\n" <<
    *p1 << ", " << *p2 << endl;*/
    
    /*const string oriStr = "Hello WorLd..";
    char c = 'l';
    string::size_type times;
    auto loc = find_char(oriStr, c, times);
    if(loc != 0) {
        cout << "The location of 'l' is in " << loc << ". and occurs " <<
        times << " times";
    } else
        cout << "The 'l' isn't in the string..";*/
    
    /*int val1 = 15, val2 = -13;
    swapQuote(val1, val2);
    cout << "The result behind exchange is: " << "\n" <<
    val1 << ", " << val2 << endl;*/
    
    /*string str = "this is a Pig!!";
    if(containUpper(str)) {
        cout << "This string contains upper letter." << endl;
    }
    cout << "The result behind change the string to lower letter is \"" <<
    changeToLower(str) << "\"." << endl;*/
    
    /*int i = 5, pi = 7;
    int *p = &pi;
    cout << "The bigger number is " << compare(i, p) << endl;*/
    
    int i = 5, r = 7;
    int *pi = &i, *pr = &r;
    swapPointerWithPointer(&pi, &pr);
    cout << "The result behind exchange of pointer is " << *pi <<
    " " << *pr << endl;
    
    return 0;
}

