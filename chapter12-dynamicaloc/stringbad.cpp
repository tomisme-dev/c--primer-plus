#include <iostream>
#include <cstring>

class StringBad
{
public:
    char * str;
    int len;
public:
    static int num_strings;
    StringBad(const char *s);
    StringBad();
    StringBad(const StringBad &sb) {
        std::cout << "construct const StringBad" << std::endl;
    }
    ~StringBad();
    friend std::ostream & operator<<(std::ostream &out, StringBad &sb) {
        out << sb.str;
        return out;
    }
};

StringBad::StringBad(const char *s)
{
    std::cout << "struction ...." << std::endl;
    len = strlen(s);
    str = new char[len+1];
    strcpy(str, s);
    num_strings++;
}

StringBad::StringBad() {
    std::cout << "struction empty ...." << std::endl;
    len = 3;
    str = new char[len+1];
    strcpy(str, "C++");
    num_strings++;
}


StringBad::~StringBad()
{
    std::cout << "destruction ...." << std::endl;
    // 释放内存
    delete [] str;
    num_strings--;
}

// 初始化静态成员变量
int StringBad::num_strings = 0;

void call(StringBad sb) {
    std::cout << "call " << sb << ", addr: " << (void *)sb.str << std::endl;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    // StringBad s2;
    StringBad s = "hello world";
    std::cout << s << std::endl;
    // cout << s2 << endl;
    cout << StringBad::num_strings << endl;
    cout << "s.str addr: " << (void *)s.str << endl;
    // call(s);
    StringBad s3 = s;
    cout << "s3 addr" << &s3 << endl;
    return 0;
}
