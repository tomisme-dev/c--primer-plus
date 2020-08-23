#include <iostream>

using namespace std;

class A{
private:
    const char * msg;
public:
    A(const char * msg): msg(msg) {
        cout << "A construction...." << msg << endl;
    }
    ~A() {
        cout << "A destruction...." << msg << endl;
    }

};

class Exception1
{
private:
    int a;
    int b;
public:
    Exception1(int a, int b): a(a), b(b) {}
    const char * msg() {
        return "a+b must not equal 0";
    }
};


class Exception2
{
private:
    int a;
    int b;
public:
    Exception2(int a, int b): a(a), b(b) {}
    const char * msg() {
        return "a*b must not equal 0";
    }

    Exception2 & operator=(const Exception2 &a) {
        cout << "copy..." << endl;
        if(this == &a) {
            return *this;
        }
        this->a = a.a;
        this->b = a.b;
        return *this;
    }
};


int calc(int a, int b)  {
    A ca("calc....");
    // A *ca = new A;
    if(a+b == 0) {
        throw Exception1(a, b);
    }

    if(a == 0 || b == 0) {
        Exception2 e2(a, b);
        // Exception2 *e2ptr = new Exception2(a, b);
        // Exception2 & e2 = *e2ptr;
        cout << "calc e2 addr: " << &e2 << endl;
        throw e2;
    }

    return a * b / (a + b);
}


void f1() {
    A a("f1 before....");
    calc(100, -100);
    A a2("f1 after....");
}


void f2() {
    A a("f2 before....");
    f1();
    A a2("f2 after....");
}


void catch_any() {
    try
    {
        calc(6, -6);
    }
    catch(...)
    {
        std::cerr << "unknow error..." << '\n';
    }
    
}

int main(int argc, char const *argv[])
{
    // try
    // {
    //     calc(0, -8);
    //     // f2();
    // }
    // catch(Exception1 & e)
    // {
    //     std::cerr << e.msg() << '\n';
    // }
    // catch(Exception2 & e)
    // {
    //     std::cerr << "addr: " << &e << ", " << e.msg() << '\n';
    // }

    // cout << "finished..." << endl;
    catch_any();
    // f2();s
    
    return 0;
}
