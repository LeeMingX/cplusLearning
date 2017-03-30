//
//  Person.hpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/28.
//  Copyright © 2017年 李璇. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <stdio.h>
#include <string>

using std::string;

struct Person{
    string name;            //名字
    string address;         //地址
    int age;                //年龄
    
    string getName() const { return name; };            //获取名字
    int getAge() const { return age; };                 //获取年龄
    string getAddress() const { return address; };      //获取地址
    Person& addFive(Person&);                           //变老5岁
};

std::ostream& print(std::ostream&, const Person&);      //将Person对象的信息输出到ostream中
std::istream& read(std::istream&, const Person&);       //读取Person对象的信息到istream对象中
#endif /* Person_hpp */
