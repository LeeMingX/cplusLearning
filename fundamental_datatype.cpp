#include <iostream>
#include "Sales_data.h"
/*第二章 基本数据类型*/

int fundamental_datatype() {

//    类型转换
    /*bool b = 42;
    int i = b;
    i = 3.14;
    double pi = i;
    unsigned char c1 = -1;   //假设char占8比特，c的值为255
    signed char c2 = 256;

    std::cout << b << std::endl;
    std::cout << i << std::endl;
    std::cout << pi << std::endl;
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;*/

//    无符号数的运算结果也不会小于0
    /*unsigned u1 = 42, u2 = 10;
    std::cout << u2 - u1 << std::endl;
    unsigned u = 10;
    int i = 10;
    std::cout << u - i << std::endl;
    std::cout << i - u << std::endl;*/

//    初始值：列表初始化
    /*int units_sold = {0};
    std::cout << units_sold << std::endl;*/

//    作用域...
    /*int i = 100, sum = 0;
    for(int i = 1; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;*/

    /*int i, &r1 = i;
    i = 5; r1 = 10;  //等同于i = 10;
    std::cout << i << r1 << std::endl;*/

//    更改指针p的值和指针所指对象的值
    /*int *p = nullptr, val = 5;
    int *p1 = nullptr, val1 = 15;
    p = &val;
    val = 10;
    std::cout << *p << std::endl;
    p1 = &val1;
    p = p1;
    std::cout << *p << std::endl;*/

//    常量引用可以引用一个普通非常量值，这个值可以不能通过
//    常量引用改变，但是可以通过别的途径改变
    /*int i = 42;
    int &r1 = i;
    const int &r2 = i;
    r1 = 5;
    std::cout << r2 << std::endl;*/

//    auto类型的判断
    /*const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;
    j = 42;
    k = 12; //k是常量引用
    p = nullptr; //p是指向常量的指针
    j2 = 34; //j2是常量整型
    k2 = j; //k2是常量引用*/

//    decltype()类型指示符，不实际计算表达式的值，只返回表达式的类型
    /*int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    std::cout << ++c << " " << ++d << std::endl;*/


    Sales_data data1, data2;
    std::cin >> data1.bookNo >> data1.saleNum >> data1.price;
    data1.revenue = data1.saleNum * data1.price;
    std::cin >> data2.bookNo >> data2.saleNum >> data2.price;
    data2.revenue = data2.saleNum * data2.price;

    if(data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.saleNum + data2.saleNum;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if(totalCnt != 0) {
            std::cout << totalRevenue/totalCnt << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
            return 0;
        }
    } else {
        std::cerr << "Data must refer to the same ISBN." << std::endl;
        return -1;
    }

    return 0;
}

