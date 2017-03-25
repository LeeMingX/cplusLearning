//
//  fact.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/25.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include <stdio.h>
#include "function.h"

//求阶乘的函数，val接受要求阶乘的值
int fact(int val) {
    int rel = 1;
    while (val > 1) {
        rel *= val--;
    }
    
    return rel;
}
