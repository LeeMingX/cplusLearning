//
//  statement.cpp
//  cplusplusLearn
//
//  Created by 李璇 on 2017/3/22.
//  Copyright © 2017年 李璇. All rights reserved.
//

#include <stdio.h>
#include <cstring>
#include <cctype>
#include <string>
#include <iostream>
#include <vector>
/*第四章 语句*/
using std::cin; using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, const char * argv[]) {
//    使用“,“运算符重写1-10这十个数的和，不使用块语句
    /*int val = 1, sum = 0;
    for(; val <= 10; sum += val, ++val)
        ;
    cout << sum << endl;*/
    
//    写一段程序，把数字成绩转换成字母成绩
//    版本一：使用if else控制
    /*vector<string> score{"F", "D", "C", "B", "A", "A++"};
    cout << "Enter your grade: " << endl;
    int grade;
    cin >> grade;
    if(grade < 60) {
        cout << "Your score is " << score[0] << endl;
    } else if(grade <100){
        if(grade % 10 <= 3) {
            cout << "Your score is " << (score[(grade-50)/10] + "-") << endl;
        } else if(grade % 10 >=7) {
            cout << "Your score is " << (score[(grade-50)/10] + "+") << endl;
        } else
            cout << "Your score is " << score[(grade-50)/10] << endl;
    } else
        cout << "Your score is " << score[(grade-50)/10] << endl;*/
    
//    版本二：使用条件运算符
    /*grade < 60 ? cout << "Your score is " << score[0] << endl : grade == 100 ?
    cout << "Your score is " << (score[(grade-50)/10]) << endl : grade % 10 >= 7 ?
    cout << "Your score is " << (score[(grade-50)/10] + "+") << endl : grade % 10 <=3 ?
    cout << "Your score is " << (score[(grade-50)/10] + "-") << endl :
    cout << "Your score is " << (score[(grade-50)/10]) << endl;*/
    
//    输入字符，打印元音字母出现的次数
    /*unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, sntCnt = 0, specCnt = 0, noSuccSpecCnt = 0;
    string str;
    char c;
    while(cin >> c) {
        switch (c) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            default:
                break;
        }
    }
    
    cout << "Number of vowal a:\t" << aCnt << "\n" <<
            "Number of vowal e:\t" << eCnt << "\n" <<
            "Number of vowal i:\t" << iCnt << "\n" <<
            "Number of vowal o:\t" << oCnt << "\n" <<
            "Number of vowal u:\t" << uCnt << "\n" << endl;*/
    
//    if else语句实现打印元音字母出现的次数
    /*while(cin >> c) {
        if(c == 'a') {
            ++aCnt;
        } else if(c == 'e') {
            ++eCnt;
        } else if(c == 'i') {
            ++iCnt;
        } else if(c == 'o') {
            ++oCnt;
        } else if(c == 'u') {
            ++uCnt;
        } else {
            ++otherCnt;
        }
    }*/
    
//    元音字母的小写形式和大写形式都计入统计记录
    /*while(cin >> c) {
        switch (c) {
            case 'a':
                ++aCnt;
                break;
            case 'A':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'E':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'I':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'O':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            case 'U':
                ++uCnt;
                break;
            default:
                break;
        }
    }*/
    
//    元音大小写、连续字符序列ff、fl、fi，空格、制表符、换行符的数量
//    连续字符序列是重复统计的。如果每一个字符只能统计一次，需要在swich控制语句外实现
    /*vector<char> cvec;
    auto cur = cvec.begin();
    while(getline(cin, str)) {          //通过getline()方法可以从标准输入中获取空格、制表符、换行符
        for(auto sbeg = str.begin(); sbeg != str.end(); ++sbeg) {
            cvec.push_back(*sbeg);
            switch (*sbeg) {
                case 'a':
                    ++aCnt;
                    break;
                case 'A':
                    ++aCnt;
                    break;
                case 'e':
                    ++eCnt;
                    break;
                case 'E':
                    ++eCnt;
                    break;
                case 'i':
                    ++iCnt;
                    cur = cvec.end() - 1;
//                    保证vector对象长度不小于2，然后用比较当前的vector对象的上一个对象与‘f’的关系，当前的vector对象一定是‘i’
                    if(cvec.size() >= 2) {
                        if(*(cur - 1) == 'f') {
                            ++specCnt;
                        }
                    }
                    break;
                case 'I':
                    ++iCnt;
                    break;
                case 'o':
                    ++oCnt;
                    break;
                case 'O':
                    ++oCnt;
                    break;
                case 'u':
                    ++uCnt;
                    break;
                case 'U':
                    ++uCnt;
                    break;
                case 'f':
                    cur = cvec.end() - 1;
                    if(cvec.size() >= 2) {
//                保证vector对象长度不小于2，然后用比较当前的vector对象的上一个对象与‘f’的关系，当前的vector对象一定是‘f’
                        if(*(cur - 1) == 'f') {
                            ++specCnt;
                        }
                    }
                    break;
                case 'l':
                    cur = cvec.end() - 1;
                    if(cvec.size() >= 2) {
//                保证vector对象长度不小于2，然后用比较当前的vector对象的上一个对象与‘f’的关系，当前的vector对象一定是‘l’
                        if(*(cur - 1) == 'f') {
                            ++specCnt;
                        }
                    }
                    break;
                default:
                    if(*sbeg == '\t' || *sbeg == '\n' || *sbeg == ' ') {
                        ++sntCnt;
                    }
                    break;
            }
        }
//        每个字符只统计一次的算法
        auto pre = str.begin();
        auto next = pre + 1;
        while(next != str.end()) {
            if(*pre == 'f') {
                if(*next == 'f' || *next == 'i' || *next == 'l') {
                    ++noSuccSpecCnt;
                    if(next + 1 != str.end()) {
                        pre = next;
                        ++pre;
                        next = pre + 1;
                    } else
                        break;
                } else {
                    pre = next;
                    ++next;
                }
            } else {
                pre = next;
                ++next;
            }
        }
    }
    
    cout << "Number of vowal a:\t" << aCnt << "\n" <<
    "Number of vowal e:\t" << eCnt << "\n" <<
    "Number of vowal i:\t" << iCnt << "\n" <<
    "Number of vowal o:\t" << oCnt << "\n" <<
    "Number of vowal u:\t" << uCnt << "\n" <<
    "Number of space and next and table:\t" << sntCnt << "\n" <<
    "Number of special:\t" << specCnt << "\n" <<
    "Number of none-successive:\t" << noSuccSpecCnt << endl;*/
    
    return 0;
}
