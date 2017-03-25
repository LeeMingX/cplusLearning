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
        return fact(--val) * (val + 1);
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

void exchange(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
