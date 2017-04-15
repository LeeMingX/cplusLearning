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
#include "Screen.h"

using std::cin; using std::cout; using std::endl;
using std::cerr;
using std::string;
using std::vector;


int main(int argc, char * argv[]) {
    
    //使用定义的Sales_data类完成录入和输出数据
    /*Sales_data total;
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
    }*/
    //使用istream参数的构造函数实现功能
    /*Sales_data total(cin);
    
    while (1) {
        Sales_data trans(cin);
        if (trans.isbn() != "") {
            if (trans.isbn() == total.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }else {
            print(cout, total) << endl;
            break;
        }
    }*/
    
    
//    Sales_data total =  Sales_data("0-231-34523-x");
//    Sales_data total;
//    Sales_data total = Sales_data("0-231-34324-x", 14.7);
//    Sales_data total = Sales_data(cin);
    
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}
