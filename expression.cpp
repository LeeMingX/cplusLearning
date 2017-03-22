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
    
//    建议仅将位运算符作用于无符号类型
//    通过位运算符来修改成绩通过与否
    /*unsigned long quiz1 = 0;
//    unsigned long类型的值可以保证一定占32位
    quiz1 |= 1UL << 27;
//    假设只有27号一个人没有通过，其他人全部通过
    quiz1 = ~(1UL << 27);
//    检测学生的通过状态
    bool status = quiz1 & (1UL << 27);
    if(status) {
        cout << "pass" << endl;
    } else {
        cout << "fail" << endl;
    }*/
    
//    sizeof运算符不会将char数组当作指针处理，对于char会返回1
    /*string s1 = "I'm a pig!!";
    char c[] = {'p', 'i', 'g'};
    auto p = sizeof(s1);
    auto x = sizeof(c);
    auto m = x/sizeof(*c);
    cout << p << endl;
    cout << x << m << endl;*/
    
//    输出每一种内置类型所占的大小
    /*bool b = 1;
    char c = 'a';
    wchar_t wc = 'c';
    char16_t c16 = 'p';
    char32_t c32 = 'p';
    short s = 14;
    int i = 4582;
    long l = 74838485;
    long long ll = 75638;
    float f = 9.43;
    double d = 23.8475;
    long double ld = 33274.74759303;
    
    size_t sb = sizeof(b);          //1
    size_t sc = sizeof(c);          //1
    size_t swc = sizeof(wc);        //4
    size_t sc16 = sizeof(c16);      //2
    size_t sc32 = sizeof(c32);      //4
    size_t ss = sizeof(s);          //2
    size_t si = sizeof(i);          //4
    size_t sl = sizeof(l);          //8
    size_t sll = sizeof(ll);        //8
    size_t sf = sizeof(f);          //4
    size_t sd = sizeof(d);          //8
    size_t sld = sizeof(ld);        //16
    
    cout << sb << " " << sc << " " << swc << " " << sc16 <<
    " " << sc32 << " " << ss << " " << si << " " << sl << " " <<
    sll << " " << sf << " " << sd << " " << sld;*/
    
//    一个整型指针占8位，一个整型数值占4位，所以sizeof的运算对象是无效指针也是安全行为，
//    因为它返回的是某个类型的指针所占的空间，而指针所指向的对象的类型的值也是确定的
    /*int x[10];
    int *p = x;
    int *m;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(m) << endl;*/
    
//    前置运算符保证下一次赋值永远是上一次的前一位的索引位置
    /*vector<unsigned long> vec{4, 2, 6, 34, 63};
    vector<unsigned long>::size_type cnt = vec.size();
    for(vector<unsigned long>::size_type i = 0; i != vec.size(); ++i, --cnt) {
        vec[i] = cnt;
    }
    for(auto c : vec) {
        cout << c << " " << endl;
    }*/
    
//    如果后置运算符放在for循环里，那么每次赋值操作会进行两遍，所以应该在循环体内完成运算
    /*vector<unsigned long> vec{4, 2, 6, 34, 63};
    vector<unsigned long>::size_type cnt = vec.size();
    for(vector<unsigned long>::size_type i = 0; i != vec.size();) {
        vec[i] = cnt;
        i++;
        cnt--;
    }
    for(auto c : vec) {
        cout << c << " " << endl;
    }*/
    
//    循环的判断条件都是遍历完整个数组
    /*constexpr int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for(int *p = ia, ix = 0; ix != size && p != ia + size; ++ix, ++p) {
//        ...
    }*/
    
    return 0;
}
