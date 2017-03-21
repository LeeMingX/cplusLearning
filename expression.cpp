//
//  main.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/20.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <vector>
/*第四章 表达式*/
using std::cout; using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(int argc, const char * argv[]) {
//    计算一个表达式的值
    /*int v1 = 12 / 3 * 4;
    int v2 = 5 * 15;
    int v3 = 24 % 4 / 2;
    int result = v1 + v2 + v3;
    cout << result << endl;*/
    
//    判断一个数是奇数还是偶数
    /*int v;
    cout << "Enter the number " << endl;
    cin >> v;
    v%2 == 1 ? cout << "v是一个奇数" : cout << "v是一个偶数";
    cout << endl;*/
    
//    一个存储着若干string对象的vector对象，要求输出string对象的内容，且遇到空字符串
//    或者以句号结束的字符串是进行换行
    
//    应该按字符串处理。而不是连接字符串后处理整个字符串
    /*vector<string> vstr{"I have a word to say.", "", "you are a lier. Is it?"};
    string result;
    for(auto str : vstr)  {
        for(auto &c : str) {
            result += c;
        }
    }
    for(auto c : result) {
        if(!isspace(c) && !ispunct(c)) {
            cout << c;
        } else {
            cout << c << endl;
        }
    }*/
    
    /*for(const auto &str : vstr) {
//        先输出vector中的对象
        cout << str;
//        判断该元素是空还是是以句号结尾的字符串
        if(str.empty() || str[str.size()-1] == '.') {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    cout << endl;*/
    
//    写一个while循环，从标准输入读取整数，直到碰到42退出循环
    /*int val;
    while(cin >> val) {
        if(val != 42)
            continue;
        else
            break;
    }
    
    cout << "end loop";*/
    
//    输入4个数a,b,c,d,使其满足a>b,b>c,c>d的条件
    /*int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > b && b > c && c > d) {
        cout << "条件满足" << endl;
    } else {
        cout << "条件不满足" << endl;
    }*/
    
//    使用条件运算符从vector<int>中找出哪些元素是奇数，然后将这些奇数翻倍
    /*vector<int> vec = {1, 4, 13, 27, 18, 8, 9, 14};
    for(auto iter = vec.begin(); iter != vec.end(); ++iter) {
        *iter%2 == 1 ? cout << (*iter *= 2) << " " : cout << *iter << " ";
    }
    cout << endl;*/
    
//    划分成绩
//    版本一：只使用条件运算符
    /*int score;
    cout << "please enter your score: " << endl;
    cin >> score;
    (score > 90) ? cout << "high pass" << endl : (score > 60 && score < 75) ?
    cout << "low pass" << endl : (score < 60) ? cout << "fail" << endl :
    cout << "pass" << endl;*/
    
//    版本二：只使用if条件语句
    /*int score;
    cout << "please enter your score: " << endl;
    cin >> score;
    if(score < 60) {
        cout << "fail" << endl;
    } else if(score < 75) {
        cout << "low pass" << endl;
    } else if(score > 90) {
        cout << "high pass" << endl;
    } else
        cout << "pass" << endl;*/
    
    
    
    
    
    return 0;
}
