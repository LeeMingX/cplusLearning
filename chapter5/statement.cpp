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
#include <stdexcept>
/*第五章 语句*/
using std::cin; using std::cout; using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::runtime_error;
int statement(int argc, const char * argv[]) {
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
                    pre = next++;
                }
            } else {
                pre = next++;
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
    
    /*从标准输入中读取若干string对象并查找连续重复出现的单词，即
    一个单词紧跟着这个单词本身，如果存在这样的单词，要求记录连续
    重复出现的最大次数以及对应的单词，如果不存在，输出一条信息说明*/
    /*vector<string> vocGroup;
    vector<vector<string>> classific(10);
    string voc;
    while(cin >> voc) {
        vocGroup.push_back(voc);
    }
    
    auto sBegin = vocGroup.begin();
    unsigned occured_num = 0;
    unsigned max_num = 0;
    string temp = " ";
    while(sBegin != vocGroup.end()) {
//        开始记第一个数，如果已经读到了单词对象的尾元素，该尾元素必然与上一个元素相同，比较
//        当前计数和最大计数来处理尾元素的值
        if(*sBegin == temp) {
            ++occured_num;
            ++sBegin;
            if(sBegin == vocGroup.end()) {
                if(occured_num >= max_num) {
                    max_num = occured_num;
                    classific[max_num].push_back(*(sBegin - 1));
                }
            }
        } else {
//            当读入数改变时，记下当前出现次数最多的词，并将这个单词存入相应的查找字典里
            if(occured_num >= max_num) {
                max_num = occured_num;
                classific[max_num].push_back(*(sBegin - 1));
            }
            occured_num = 1;
            temp = *sBegin;
            ++sBegin;
        }
    }
    
    if(max_num > 1) {
        string result = " ";
        for(auto v : classific[max_num]) {
            result += v + ",";
        }
        for(auto c = result.begin(); c != result.end(); ++c) {
            if(*c == ' ' && c == result.begin()) {
                *c = '\b';
            }
            if(*c == ',' && c == result.end() - 1) {
                *c = '.';
            }
        }
        cout << "The occured mostly string is " << result << "\n" <<
        "The occured time is " << max_num << endl;
    } else {
        cout << "None of the string occured more than one time...." << endl;
    }*/
    
//    for循环实现while循环的效果
    /*vector<int> ivec;
    int val;
    while (cin >> val) {
        ivec.push_back(val);
    }
    
    auto beg = ivec.begin();
    while (beg != ivec.end() && *beg >= 0)
        ++beg;
    if(beg == ivec.end()) {
        cout << "No negative number.." << endl;
    } else{
        cout << "The first negative number is " << *beg << endl;
    }
    
    for (; beg != ivec.end() && *beg >= 0;) {
        ++beg;
    }
    if(beg == ivec.end()) {
        cout << "No negative number.." << endl;
    } else{
        cout << "The first negative number is " << *beg << endl;
    }*/
    
//    假设有两个整型的vector对象，检验其中一个是否是另一个的前缀
    /*vector<int> ivec1{1,1,2}, ivec2{0,1,1,2,4,5,2}, curVec;
//    int val;
//    cout << "Please enter the first vector :" << endl;
//    while (cin >> val) {
//        ivec1.push_back(val);
//        if (val == '\n') {
//            <#statements#>
//        }
//    }
//    cout << "Please enter the second vector :" << endl;
//    while (cin >> val) {
//        ivec2.push_back(val);
//    }
    
    decltype(ivec1.begin()) head;
    if (ivec1.size() >= ivec2.size()) {
        curVec = ivec2;
        head = ivec1.begin();
    } else {
        curVec = ivec1;
        head = ivec2.begin();
    }
    
    for (auto cFirst = curVec.begin(); cFirst != curVec.end(); ++cFirst) {
        if(*cFirst == *head)
            ++head;
        else {
            cout << "It's not the prefix" << endl;
            break;
        }
    }
    
    if (*(head - 1) == *(curVec.end() - 1)) {
        cout << "It's the prefix" << endl;
    }*/
    
//    提示用户输入两个string对象，然后挑出较短的那个输出出来
    /*string req;
    
    do {
        string str1, str2;
        cout << "Please enter the two string: " << endl;
        cin >> str1 >> str2;
//        比较过程
        decltype(str1.size()) x1 = str1.size();
        decltype(str2.size()) x2 = str2.size();
        if (x1 > x2) {
            cout << str2 << endl;
        } else {
            cout << str1 << endl;
        }
        
        cout << "More? Enter yes or no: " << endl;
        cin >> req;
    } while (!req.empty() && req[0] != 'n');*/
    
//    从标准输入中读取string对象的序列直到连续出现两个相同的单词或者所有单词都读完
//    使用while循环一次读取一个单词，当一个单词连续出现两次breke挑出循环，若没有则输出信息
    /*string str, pre = " ";
    unsigned times = 0;
    while (cin >> str) {
        if(!str.empty() && str == pre) {
            ++times;
            cout << str << " was occured twice." << endl;
            break;
        } else {
            pre = str;
            times = 1;
        }
    }
    if (times < 2) {
        cout << "No vocabulary occured twice closely.." << endl;;
    }*/
    
//    重写上例程序，使其找到的单词必须是以大写字母开头的
    /*string str, pre = " ";
    unsigned times = 0;
    while (cin >> str) {
        if(!str.empty() && str == pre) {
            if (islower(str[0])) {
                continue;
            } else {
                ++times;
            }
            cout << str << " was occured twice." << endl;
            break;
        } else {
            pre = str;
            times = 1;
        }
    }
    if (times < 2) {
        cout << "No vocabulary occured twice closely.." << endl;;
    }*/
    
//    从标准输入中读取两个整数，输出第一个整数除以第二个整数的结果
//    当第二个数是0是引发异常，将异常处理放在与用户交互的代码中，用catch捕捉一场然后处理
    int val1, val2;
    cout << "Enter two numbers : " << endl;
    while (cin >> val1 >> val2) {
        try {
            if(val2 == 0) throw runtime_error("Data shouldn't be zero!!!");
            else {
                float result = static_cast<float>(val1)/val2;
                cout << val1 << " divides " << val2 << " values " << result << endl;
                break;
            }
        } catch (runtime_error err) {
            cerr << err.what() << endl;
            
            cout << "Please enter the new group with two numbers: " << endl;
            continue;
        }
    }
    
    return 0;
}
