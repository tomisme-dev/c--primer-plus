#ifndef STRING_HPP_
#define STRING_HPP_

#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;
    int len;
    static int num_strings;

public:
    String();
    String(const char * str);
    String(String & s);
    String & operator=(const String &s);
    String & operator=(const char * str) {
        delete [] this->str;
        len = strlen(str);
        this->str = new char[len+1];
        strcpy(this->str, str);
    }
    ~String();
    int length() {
        return len;
    }

    friend bool operator<(const String &s1, const String &s2) {
        return strcmp(s1.str, s2.str) < 0;
    }
    friend bool operator>(const String &s1, const String &s2) {
        return strcmp(s1.str, s2.str) > 0;
    }
    friend bool operator==(const String &s1, const String &s2) {
        return strcmp(s1.str, s2.str) == 0;
    }

    friend istream & operator>>(istream & in, String & s) {
        char buf[1024];

        bool eof = cin.read(buf, sizeof(buf) - 1).eof();
        // cout << "is eof: " << eof << endl;
        s = buf;
        return in;
    }


    friend ostream & operator<<(ostream & out, String & s) {
        out << s.str;
        return out;
    }

    char & operator[](int i) {
        return str[i];
    }

    const char & operator[](int i) const {
        return str[i];
    }

    static int HowMany() {
        return num_strings;
    }
};


String::String(/* args */)
{
    len = 1;
    str = new char('\0');
    num_strings++;
}

String::String(const char * str) {
    len = strlen(str);
    this->str = new char[len+1];
    strcpy(this->str, str);
    num_strings++;
}

String::String(String & s) {
    len = s.len;
    this->str = new char[len+1];
    strcpy(this->str, s.str);
    num_strings++;
}


String::~String()
{
    delete [] str;
    num_strings--;
}

String & String::operator=(const String &s) {
    if(&s == this) {
        return *this;
    }

    delete [] this->str;

    this->len = s.len;
    this->str = new char[this->len + 1];
    strcpy(this->str, s.str);
    return *this;

}

// 初始化成员变量
int String::num_strings = 0;

#endif