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
    
    int i1,i2;
    cout << "Enter two numbers: " << endl;
    cin >> i1 >> i2;
    int *p1 = &i1, *p2 = &i2;
    exchange(p1, p2);
    cout << "The result behind exchange is: " << "\n" <<
    *p1 << ", " << *p2 << endl;
    
    return 0;
}

