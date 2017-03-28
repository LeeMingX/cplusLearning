#ifndef FUNCTION_H
#define FUNCTION_H
#include <string>
#include <initializer_list>
#include <vector>

using std::string;
using std::vector;
using std::initializer_list;

using StrArry = string[10];
//求阶乘的函数，val接受要求阶乘的值
inline int fact(int val);
//有交互过程的求解阶乘的函数，返回用户输入值的函数
int mutualFact();
//递归求阶乘
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
inline string changeToLower(string &str) {
    if(!str.empty()) {
        for(auto &c : str) {
            c = tolower(c);
        }
    } else
        return 0;
    return str;
}
//函数接受两个参数，一个int型的数，一个是int型的指针，比较前者和后者指向的值，返回较大的值
int compare(int ival, const int *p);
//函数交换两个int指针,使用引用
void swapPointerWithRefer(int *&p1, int *&p2);
//函数交换两个int指针，使用指针
void swapPointerWithPointer(int **p1, int **p2);
//打印数组元素的函数
void printWithInteger(const int *ia, int val);
void printWithPointer(const int *beg, const int *end, int val);
void printWithFor(const int ia[], size_t n, int i);
//函数参数是initializer_list<int>类型的对象，函数的功能是计算列表中所有元素的和
unsigned calArgvSum(initializer_list<int> il);
//通过返回引用类型的值修改给定整形数组的给定索引的值
int &get(int *p, int index);
//递归输出vector对象中的值
void printVectorWithRecursion(const vector<string> &vec,  vector<string>::size_type index);
//一个函数的声明，返回数组的引用并且数组包含10个string对象，使用别名或者直接声明
//StrArry &aFunc();
//string (&otherFunc())[10];
//使用尾置返回类型和decltype
//auto anotherFunc() -> string(&)[10];
//string stra[10];
//decltype(stra) &someFunc();
//将arrPtr的返回类型改成引用
extern int odd[5];
decltype(odd) &arrPtr(int i);
//给定计数值、单词和结束符之后，判断计数值是否大于一，如果是，返回单词的复数形式，不是返回单词原型
string make_plural(size_t ctr, const string &word, const string &ending = "s");
//比较两个string对象的长度
inline bool isShorter(const string &str1, const string &str2) {
    return str1.size() < str2.size();
}
//测试函数匹配的四个示例函数
void print();
void print(int);
void print(int, int);
void print(double, double d2 = 3.14);
//编写一个函数的声明，接受两个int类型的形参，返回值也是int类型
int func(int, int);
int add(int, int);
int sub(int, int);
int multi(int, int);
int dev(int, int);
#endif
