#include <iostream>
#include <cstdio>
using namespace std;

class Stock {
public:
    int x = 1;
    int y = 2;
    char c = 3;

public:
    void hello() {
        cout << "good morning!!" << endl;
    }
};


struct stock00
{
    int x;
    int y;
    char c;
};

typedef unsigned char byte;

template <typename T>
void print_byte(const T &t) {
    cout << "========================start=======================" << endl;
    size_t len = sizeof(t);
    const byte * start = (byte *)&t;
    for(int i = 0; i < len; i++) {
        printf("%p: %d\n", start, *start);
        start++;
    }
    cout << "========================end=======================" << endl;
}

int main(int argc, char const *argv[])
{
    cout << sizeof(Stock) << endl;
    cout << sizeof(stock00) << endl;
    Stock s;
    s.hello();

    int a = 10;
    print_byte(a);
    print_byte(s);
    cout << (int)s.c << endl;;

    string name = "abcdefgjijhjkla";
    print_byte(name);
    cout << (void *)&name[0] << endl;
    
    return 0;
}
