#include <iostream>
#include <utility>
using namespace std;

#define SHOW(A) cout<<#A<<" addr: "<<&A<<endl

class S {
public:
    void show() {};
};


class A{
public:
    int val;
    virtual void f() {
        cout << "f()" << endl;
    }

    void show() {
    }

    A() = default;
    A(const A & a) = default;
    A(A && a) = default;
    A & operator=(const A & a) = default;
    A & operator=(A && a) = default;
};


void test1() {
    A a;
    a.val = 8;

    A b(a);
    A c((A &&)a);
    A d;
    d = a;
    A e;
    e = (A &&) a;

    SHOW(a);
    SHOW(b);
    SHOW(c);
    SHOW(d);
    SHOW(e);

    a.show();
}

class B: public S {
public:
    int val;
    B(int val): val(val){};
    B() = default;
    // B(const B & b) = delete;
    ~B() = default;

    void show() = delete;
};


void test2() {
    B b;
    B c(b);
    c = b;
    // c.show();
}



int main(int argc, char const *argv[])
{

    test2();
    return 0;
}
