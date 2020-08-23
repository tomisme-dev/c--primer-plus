#include <iostream>

using namespace std;

class A {
public:
    double d;
    virtual void show(int age) {
        cout << "A show: " << age << endl;
    }
};
class B: virtual public A {
public:
    double b;
};
class C: public B {
public:
    double c;
};
class D: public C {};
class E: public D {
public: 
    double e;
};


typedef void (* func)(void *); // 定义即将要动态调用的方法



int main(int argc, char const *argv[])
{
    // E e;
    // func **funs = (func **) &d;
    // void (* show_func)(D &, int) = (void (*)(D &, int)) (*funs)[0];
    // show_func(d, 32);

    // cout << sizeof(e) << endl;
    // cout << "E addr: " << &e << endl;
    // cout << "D addr: " << (D *)&e << endl;
    // cout << "C addr: " << (C *)&e << endl;
    // cout << "B addr: " << (B *)&e << endl;
    // cout << "A addr: " << (A *)&e << endl;
    // cout << "E.d addr: " << &e.d << endl;
    // cout << "E.e addr: " << &e.e << endl;

    // B b;
    // cout << sizeof(b) << endl;

    C c;
    cout << sizeof(C) << endl;
    cout << "C addr: " << &c << endl;
    cout << "B addr: " << (B *)&c << endl;
    cout << "A addr: " << (A *)&c << endl;
    cout << "c.c addr" << &c.c << endl;
    
    return 0;
}
