#include <iostream>
#include "lib.h"
// using namespace std;

template <typename T>
void swap(T &a, T &b, T &c) {
    T tmp = a;
    a = b;
    b = c;
    c = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 3;
    int c = 4;
    swap(a, b);
    swap(a, b, c);

    double d1 = 2.0;
    double d2 = 4.0;
    swap(d1, d2);
    return 0;
}


template <typename t>
void swap(t &a, t &b) {
    t tmp = a;
    a = b;
    b = tmp;
}