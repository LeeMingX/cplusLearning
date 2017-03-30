//
//  class.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/28.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include "Person.hpp"
#include "Sales_data.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::cerr;
using std::string;
using std::vector;


int main(int argc, char * argv[]) {
    
    //使用定义的Sales_data类完成录入和输出数据
    Sales_data total;
    if(read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if(trans.isbn() == total.isbn()) {
                total = total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "You have to enter some data!!" << endl;
    }
    
    return 0;
}
