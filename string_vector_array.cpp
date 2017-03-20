#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstddef>
#include <cstring>
/*第三章 字符串、向量和数组*/
using std::cout; using std::cin;
using std::endl;
using std::string;
using std::vector;
using int_array = int[4];
int string_vector_array() {
//    包含using声明后重做50-100的和的计算
    /*int i = 50, sum = 0;
    do {
        sum += i;
        ++i;
    } while (i < 101);
    cout << "The sum of 50 to 100 is " << sum << endl;*/

//    使用getline()读取一整行,empty函数根据string对象是否为空返回一个相应的bool值
//    size返回string对象的长度
    /*string line;
    while (getline(cin, line)) {
        if(!line.empty() && line.size() <= 30) {
            cout << line << endl;
        } else {
            std::cerr << "data is wrong..." << endl;
        }
    }*/

//    string的size函数返回的是一个string::size_type类型的值，是一个unsigned类型，
//    所以出现size函数的表达式不要再使用int

//    比较两个string对象的大小，长度相同，大小写比较如下。
    /*string s1 = "hello";
    string s2 = "Hello";
    if(s1 < s2) {
        cout << "s1 < s2" << endl;
    } else {
        cout << "s1 > s2" << endl;
    }*/

//    从标准输入中一次读入一个词
    /*string s1;
    while (cin >> s1) {
        cout << s1 << endl;
    }*/

//    比较两个字符串是否相等并输出结果，如果不相等，输出较大的字符串
    /*string s1, s2;
    cin >> s1 >> s2;
    if(s1 != s2) {
        s1 > s2 ? cout << s1 << endl : cout << s2;
    } else {
        cout << "s1 equals s2 ..." << endl;
    }*/

//    比较两个字符串是否等长，如果不等长，输出长度较大的字符串
    /*if(s1.size() == s2.size()) {
        cout << "s1\'s length equals s2s\'";
    } else {
        s1.size() > s2.size() ? cout << s1 <<endl : cout << s2 << endl;
    }*/

//    从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串
//    用空格把输入的多个字符串分隔开来。
    /*string s, allS;
    for(int i = 0; i < 9; ++i) {
        cin >> s;
        allS = allS + s + " ";
    }
    cout << allS << endl;*/

//    使用范围for语句和isUpper()函数来统计string对象中大写字母的数量
    /*string s;
//    cnt的数据类型应该和s.size()返回的类型相同
    decltype(s.size()) cnt = 0;
    getline(cin, s);
    for(auto c : s) {
        if(isupper(c))
            ++cnt;
    }
    cout << cnt << " Uppercase character in \'" << s << "\'" << endl;*/

//    使用范围for语句改变字符串中的字符,都用X代替
    /*string s("Hello World!!!");
    char c1 = 'X';
    decltype(s.size()) i = 0;
    for(auto &c : s) {
        c = c1;
    }
    cout << s << endl;

    while (i < s.size()) {
        s[i] = c1;
        ++i;
    }
    cout << s << endl;

    for (i = 0; i < s.size(); ++i) {
        s[i] = c1;
    }
    cout << s << endl;*/

//    读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分
    /*string s("boom, karl pretty?!!");
    string result;
    for (decltype(s.size()) index = 0; index != s.size(); ++index) {
        if(!ispunct(s[index])) {
            result += s[index];
        }
    }
    cout << result << endl;*/

//    c的类型是const char & ..
    /*const string s("Keep out!");
    for(auto &c : s) {
        //不能通过常量引用修改其绑定对象的值
        c = tolower(c);
    }*/

//    输入一组整数并把它们存在一个vector对象中
    /*vector<int> iv;
    vector<string> sv;
    int val;
    string s;
    while (cin >> val) {
        iv.push_back(val);
    }

    while (cin >> s) {
        sv.push_back(s);
    }

    for(auto c : sv) {
        cout << c << " " ;
    }

    cout << endl;*/

//    一组成绩的集合，成绩的取值为0-100，以10分为一个分数段，要求统计各个分数段
//    各有多少个成绩
    /*unsigned grade;
    vector<unsigned> scores(11, 0);
    while (cin >> grade) {
        auto i = grade/10;
        scores[i] += 1;
//        ++scores[i];
    }
//    更加简洁的代码！！
    while (cin >> grade) {
        if(grade <= 100) {
            ++scores[grade/10];
        }
    }

    cout << "the number is : ";
    for (decltype(scores.size()) i = 0; i < scores.size(); ++i) {
        cout << scores[i] << " ";
    }
    cout << endl;*/

//    从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式，
//    输出改变后的结果，每个词占一行
    /*vector<string> upVac;
    string vac;
    while (cin >> vac) {
        upVac.push_back(vac);
    }

    for (decltype(upVac.size()) index = 0; index < upVac.size(); ++index) {
        for(auto &c : upVac[index]) {
            c = toupper(c);
        }
    }

    for(auto c : upVac) {
        cout << c << endl;
    }*/

//    读入一组整数存入一个vector对象，将每对相邻整数的和输出出来
    /*int val;
    vector<int> getData;
    vector<int> getSum;

    while (cin >> val) {
        getData.push_back(val);
    }

    for(decltype(getData.size()) index = 0; index < getData.size() - 1; ++index) {
        int sum = 0;
        sum = getData[index] + getData[index+1];
        getSum.push_back(sum);
    }

    cout << "The sum is: ";

    for(auto c : getSum) {
        cout << c << " ";
    }
    cout << endl;*/

//    利用迭代器将string对象的第一个字母和第一个单词转变为大写
    /*string s("some string");
    if(s.begin() != s.end()) {    //判断是否为空字符串
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;

    for(auto item = s.begin(); item != s.end() && !isspace(*item); ++item) {
        *item = toupper(*item);
    }
    cout << s << endl;*/

//    下面两个练习的变量
    /*vector<int> intVal;
    int val;
    int a1 = 0, a2 = 0;

    while (cin >> val) {
        intVal.push_back(val);
    }

    decltype(intVal.size()) limit = intVal.size()/2;    //确定迭代器移动次数
    decltype(intVal.size()) remain = intVal.size()%2;   //判断vector对象的容量奇偶性
    decltype(intVal.size()) def = 0; */                   //次数循环初始值

//    利用迭代器获取相连两个数的和
    /*cout << "The sum is :" << endl;
    for(auto it = intVal.begin(); it != intVal.end(); ++it) {

        if (*it == *(intVal.begin())) {
            a1 = *it;
        } else {
            a2 = *it;
            cout << a1 + a2 << " " ;
            a1 = a2;
        }
    }
    cout << endl;
    cout << "The sum is :" << endl;*>
//    如果vector对象中只有一个元素，则输出这个元素
    /*if(++intVal.begin() == intVal.end()) {
        cout << *intVal.begin();
    } else {
        for(auto first = intVal.begin(), last = --intVal.end();
            def < limit; ++first, --last) {
            int sum = 0;
            sum = *first + *last;
            cout << sum << " ";
            if(++def == limit && remain == 1) {
                cout << *(++first);
            }
        }
    }

    cout << endl;*/

//    创建一个含有10个整数的vector对象，使用迭代器将所有元素的值变成原来的2倍
//    然后输出
    /*vector<int> vals(10);
    int val;
    while (cin >> val) {
        vals.push_back(val);
    }

    for(auto item = vals.begin(); item != vals.end(); ++item) {
        *item = *item * 2;
    }

    for(auto c : vals) {
        cout << c << " ";
    }
    cout << endl;*/

//    将string类型的vector对象中的字符串转换成大写输出
    /*vector<string> text{"hi i have a word to say.."};
    for(auto it = text.begin(); it != text.end() && !it -> empty(); ++it) {   //string对象也有empty()成员
        for(auto &c : *it) {
            c = toupper(c);
        }
    }

    for(auto c : text) {
        cout << c << endl;
    }*/

//    迭代器实现二分法
    /*vector<int> vals{1, 3, 6, 9, 15, 17, 23, 44, 50};
    auto beg = vals.begin();
    auto end = vals.end();
    auto mid = beg + (end - beg)/2;
    int val;
    cout << "enter the number: " << endl;
    cin >> val;
    while (val != *mid && mid != end) {
        if(val < *mid) {
            end = mid;                      //end迭代器始终在子vector对象的尾元素的下一个位置
        } else {
            beg = mid + 1;
        }

        mid = beg + (end - beg)/2;
    }

    if(val == *mid && mid != end) {
        cout << "the number found!" << endl;
    } else {
        cout << "the number was not found..." << endl;
    }*/

//    统计从0-100个分数段成绩人数，用迭代器实现
    /*vector<int> vals;
    vector<int> person(11, 0);
    int grade;

    //改良版
    while (cin >> grade) {
        if(grade > 0 && grade <= 100) {
            auto iter = person.begin();
            for(int i = 0; i < grade/10; ++i) {
                ++iter;
            }
            *iter = *iter + 1;
        }
    }*/

    //笨拙版
    /*while (cin >> grade) {
        if(grade > 0 && grade <= 100) {
            vals.push_back(grade);
        }
    }

    for(auto it = vals.begin(); it != vals.end(); ++it) {
        int score = *it/10;
        auto iter = person.begin();
        for(int i = 0; i < score; ++i) {
            ++iter;
        }
        *iter = *iter + 1;
    }

    for(auto c : person) {
        cout << c << " ";
    }
    cout << endl;*/

    //定义一个含有10个int的数组，另每个元素的值就是其下标值
    /*constexpr size_t array_size = 10;
    int ia[array_size];
    for(int i = 0; i <array_size; ++i) {
        ia[i] = i;
        cout << ia[i] << " ";
    }
    cout << endl;

    int ib[array_size] = {};
    for(size_t i = 0; i < array_size; ++i) {
        ib[i] = ia[i];
    }
    for(auto c : ib) {
        cout << c << " ";
    }
    cout << endl;

    vector<int> v1(10);
    int i = 0;
    for(auto it = v1.begin(); it != v1.end(); ++it) {
        *it = i++;
    }
    for(auto c : v1) {
        cout << c << " ";
    }
    cout << endl;*/

//    利用指针将数组中的元素置为0
    /*constexpr size_t arraySize = 5;
    int a[arraySize] = {5, 3, 8, 12, 32};
    int *p = a;
    for(int i = 0; i < arraySize; ++i) {
        *(p++) = 0;
    }
    for (auto c : a) {
        cout << c << " ";
    }
    cout << endl;*/

//    比较两个数组是否相等，比较两个vector对象是否相等
    /*vector<int> v1{4, 5};
    vector<int> v2{4, 5, 7};
    if(v1 == v2) {
        cout << "v1 equals v2" << endl;
    } else {
        cout << "v1 not equals v2" << endl;
    }*/

//    当两个字符串的其中一个到达尾元素的下一位置或者两个字符串相等时退出循环
//    未完成代码
    /*int a1[] = {4, 5};
    int a2[] = {4, 5};
    int *p1 = a1, *p2 = a2;
    while (*p1 == *p2) {
        ++p1;
        ++p2;
    }
    if(*p1 != *p2) {
        cout << "a1 not equals a2" << endl;
    } else {
        cout << "a1 equals a2" << endl;
    }*/

//    比较两个string对象的字符串，比较两个c风格字符串
    /*string s1 = "hello";
    string s2 = "Hello";
    char c1[] = {'h', 'e', 'l', 'l', 'o'};
    char c2[] = {'H', 'e', 'l', 'l', 'o'};

    if(s1 > s2) {
        cout << "s1 > s2" << endl;
    } else {
        cout << "s1 <= s2" << endl;
    }

    if(strcmp(c1, c2) < 0) {
        cout << "c1 < c2" << endl;
    } else {
        cout << "c1 >= c2" << endl;
    }*/

//    定义两个字符数组，然后定义另外一个字符数组来存储这两个数组连接后的值
    /*constexpr char c1[] = "pig";
    constexpr char c2[] = "dump";
    char result[11];
    strcpy(result, c1);
    strcat(result, " is ");
    strcat(result, c2);

    for(auto c : result) {
        cout << c;
    }
    cout << endl;
    cout << strlen(c1) << endl;*/

//    将一个整型的vector对象拷贝给一个整型数组
    /*vector<int> v1{1, 3, 4, 5};
    int a1[4];
    int i = 0;
    for(auto iter = v1.begin(); iter != v1.end(); ++iter) {
        a1[i++] = *iter;
    }

    for(auto c : a1) {
        cout<< c << endl;
    }*/

    int ia[3][4];
    int val = 0;
    for(auto &row : ia) {
        for(auto &col : row) {
            col = val;
            ++val;
        }
    }

//    编写三个版本的程序，均能输出ia的元素

//    版本一：使用范围for语句管理迭代过程
    /*for(const int (&r)[4] : ia) {
        for(int p : r) {
            cout << p << " ";
        }
    }
    cout << endl;*/

//    版本二：使用普通的for循环，用下标管理迭代过程
    /*for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 4; ++j) {
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;*/

//    版本三：使用普通for循环，用指针管理迭代过程,使用类型别名
    /*for(int_array *p = ia; p != ia + 3; ++p) {
        for(int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
    }
    cout << endl;*/

//    不使用类型别名
    /*for(int (*p)[4] = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
    }
    cout << endl;*/

    for(const auto &row : ia) {
        for(auto col : row) {
            cout << col << " ";
        }
    }
    cout << endl;
    //常量指针必须初始化，*const的写法表明指针本身也是常量

    return 0;
}