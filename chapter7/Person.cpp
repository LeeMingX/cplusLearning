//
//  Person.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/30.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Person.hpp"

Person& Person::addFive(Person& p) {
    p.age += 5;
    return p;
}

std::ostream& print(std::ostream& os, const Person& p) {
    os << p.getAge() << std::endl;
    return os;
}

std::istream& print(std::istream& is, Person& p) {
    is >> p.name >> p.age >> p.address;
    return is;
}
