//
// Created by lxGhost on 2017/3/14.
//

//头文件保护符
#ifndef Sales_data_h
#define Sales_data_h

#include <string>
#include <iostream>
using std::string;

struct Sales_data {
    string isbn() const { return bookNo; };     //返回ISBN号
    Sales_data& combine(const Sales_data&);     //将一个对象加到另外一个上面
    double avg_Price() const;                   //求售出的书籍的平均价格
    
    string bookNo;                              //书的ISBN号
    string bookName;                            //书的名字
    unsigned saleNum = 0;                       //书的销售数量
    double price = 0.0;                         //书的销售单价
    double revenue =0.0;                        //书的销售额
    
//    构造函数
    Sales_data() = default;
    Sales_data(const string &n) : bookNo(n), bookName("shadiao"), saleNum(2) {};
    Sales_data(const string &n, unsigned s, double p) : bookNo(n), saleNum(), revenue(s*p) {};
    /*Sales_data(std::istream &is) {
        is >> bookNo >> bookName >> saleNum;
    };*/
    Sales_data(std::istream &);
};
Sales_data add(const Sales_data&, const Sales_data&);       //执行两个对象的加法
std::istream& read(std::istream&, Sales_data&);             //将数据从istream读入到对象中
std::ostream& print(std::ostream&, const Sales_data&);      //将对象的值输出到ostream
#endif
