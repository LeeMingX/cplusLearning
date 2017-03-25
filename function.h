#ifndef FUNCTION_H
#define FUNCTION_H
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
void exchange(int *p1, int *p2);
#endif
