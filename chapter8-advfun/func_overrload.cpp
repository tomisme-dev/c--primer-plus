#include <iostream>

using namespace std;

void f1(int a) {
    cout << "int " << a << endl;
}


// 和void f1(int a)方法冲突
// void f1(int & a) {
//     cout << "int & " << a << endl;
// }

void f1(long a) {
    cout << "long " << a << endl;
}


int f1(double a) {
    cout << "double " << a << endl;
    return a + 1;
}


typedef struct
{
    int a;
} s1;

typedef struct
{
    int a;
} s2;

void f1(s1 a) {
    cout << "s1 " << endl;
}

void f1(s2 a) {
    cout << "s2 " << endl;
}

typedef int myint;
// compile error
// void f1(myint a) {
//     cout << "myint " << a << endl;
// }

void f2(int a) {
    cout << "f2 int " << a << endl;
}


int main(int argc, char const *argv[])
{
    f1(1);
    f1(2L);
    myint m1 = 3;
    f1(m1);

    unsigned int x = 8;
    // f1(x);
    f2(x);
    return 0;
}
