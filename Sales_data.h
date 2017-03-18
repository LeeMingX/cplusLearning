//
// Created by lxGhost on 2017/3/14.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
struct Sales_data {
    std::string bookNo;     //书的ISBN号
    std::string bookName;   //书的名字
    unsigned saleNum;       //书的销售数量
    double price;           //书的销售单价
    double revenue;         //书的销售额
};
#endif
