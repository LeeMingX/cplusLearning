#include <iostream>
#include "Sales_item.h"

/*这是一个用于学习C++ Primer的练习程序
 * 第一章 开始
这里是注释部分*/

int begin() {

//    打印两个数的和
    /*std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    打印“Hello, World”
    std::cout << "Hello, World" << std::endl;

    打印两个数的乘积
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;*/

//    将每个运算对象的打印操作放在一条独立的语句中
    /*std::cout << "Enter two numbers:";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;*/

//    注释界定符不能嵌套
    /*std::cout << "*//*";
    std::cout << "*//*";
    std::cout << *//* "*//*"*//*"*//*"*//*;*/

//    控制流中的while语句
//    将50-100的整数相加
    /*int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "The sum of 50 to 100 inclusive is "
              << sum << std::endl;*/

//    按递减顺序打印出10-0之间的整数
    /*int val = 10;
    while (val >= 0) {
        std::cout << val << " ";
        --val;
    }*/

//    用户输入两个整数，打印出这两个整数所指定范围内的所有整数
    /*int v1, v2, temp = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    if(v1 < v2) {
        temp = v1 + 1;                      //打印出来的数字不包含v1或者v2
        if(temp == v2) {
            std::cout << "null";
        } else {
            while (temp < v2) {
                std::cout << temp++ << " ";     //每次打印完数字执行递增运算符，先取值再执行加1操作
            }
        }
    } else if(v1 == v2) {
        std::cout << "null";
    } else {
        temp = v1 - 1;
        if(temp == v2) {
            std::cout << "null";
        } else {
            while (temp > v2) {
                std::cout << temp-- << " ";
            }
        }
    }*/

//    使用for循环将50-100的整数相加
    /*int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;*/

//    使用for循环按递减顺序打印10-0之间的整数
    /*for(int i = 10; i >= 0; --i) {
        std::cout << i << " ";
    }*/

//    使用for循环，用户输入两个整数，打印出这两个整数所指定范围内的所有整数
    /*int v1, v2;
    std::cout << "Enter two number:" << std::endl;
    std::cin >> v1 >> v2;
    if(v1 < v2) {
        for (int i = v1+1; i <= v2; ++i) {      //for循环先判断条件再执行语句块
            if(i == v2) {
                std::cout << "null";
            } else {
                std::cout << i << " ";
            }
        }
    } else if(v1 == v2) {
        std::cout << "-";
    } else {
        for (int i = v1-1; i >= v2 ; i--) {
            if(i == v2) {
                std::cout << "null";
            } else {
                std::cout << i << " ";
            }
        }
    }*/

//    从cin读取一组数，输出其和
    /*int val = 0, sum = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << "The sum is: " << sum << std::endl;*/

//    统计在输入中每个值连续出现了多少次
    /*int pre_data = 0, cur_val = 0;
    if(std::cin >> pre_data) {              //输入第一个数据
        int cnt = 1;
        while (std::cin >> cur_val) {       //处理后面的数据
            if(cur_val == pre_data) {       //如果和第一个数据相同，则次数加1
                ++cnt;
            } else {
                std::cout << pre_data << " occurs " << cnt << " times" << std::endl;
                pre_data = cur_val;         //如果和第一个数据不同，当前数据替换比较数据
                cnt = 1;                    //重置次数
            }
        }
        std::cout << pre_data << " occurs " << cnt << " times" << std::endl;  //打印最后一个数据出现的次数
    } else {
        std::cout << "not find data..." << std::endl;
    }*/

//    读取两个相同ISBN的Sales_item对象，输出它们的和
    /*Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;*/

//    读取多条销售记录，统计每本书有几条销售记录
    /*Sales_item firstBook, book;
    std::cout << "Enter the book information:" << std::endl;
    if(std::cin >> firstBook) {
        int sum = 1;
        while (std::cin >> book) {
            if(book.isbn() == firstBook.isbn()) {
                ++sum;
            } else {
                std::cout << "The same book " << firstBook.isbn() << " occurs "
                          << sum << " times." << std::endl;
                firstBook = book;
                sum = 1;
            }
        }
        std::cout << "The same book " << firstBook.isbn() << " occurs "
                  << sum << " times." << std::endl;
    }*/

    return 0;
}