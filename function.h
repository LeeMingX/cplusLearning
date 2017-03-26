#ifndef FUNCTION_H
#define FUNCTION_H
#include <string>

using std::string;

//求阶乘的函数，val接受要求阶乘的值
int fact(int val);
//有交互过程的求解阶乘的函数，返回用户输入值的函数
int mutualFact();
//递归求阶乘，好像不太规范
int recursionFact(int val);
//返回一个数的绝对值
double absoluteValue(double val);
//包含形参、局部变量、局部静态变量的一个函数
size_t unmeaning(size_t val);
//这个函数第一次被调用返回值为0，之后每次被调用返回值加1
unsigned staticTest();
//这个函数使用指针形参交换两个整数的值
void swap(int *p1, int *p2);
//给定一个字符串和一个搜索字符，求得这个字符第一次出现在这个字符串的位置索引和出现的次数
std::string::size_type find_char(const std::string &str, char c, std::string::size_type &occur);
//使用引用传递交换两个整数的值
void swapRefer(int &i1, int &i2);
//判断字符串对象中是否含有大写字母
bool containUpper(const string &str);
//将字符串对象中全部字符改成小写形式
string changeToLower(string &str);
//函数接受两个参数，一个int型的数，一个是int型的指针，比较前者和后者指向的值，返回较大的值
int compare(int ival, const int *p);
//函数交换两个int指针,使用引用
void swapPointerWithRefer(int *&p1, int *&p2);
//函数交换两个int指针，使用指针
void swapPointerWithPointer(int **p1, int **p2);
#endif
