//
//  Sales_data.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/30.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include "Sales_data.h"

Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
}

double Sales_data::avg_Price() const {
    if(saleNum) {
        return revenue / saleNum;
    } else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    saleNum += rhs.saleNum;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& read(std::istream& is, Sales_data& sd) {
    is >> sd.bookNo >> sd.saleNum >> sd.price;
    sd.revenue = sd.saleNum * sd.price;
    return is;
    
}

std::ostream& print(std::ostream& os, const Sales_data& sd) {
    os << sd.isbn() << " " << sd.saleNum << " " << sd.revenue << " "
    << sd.avg_Price();
    return os;
}
