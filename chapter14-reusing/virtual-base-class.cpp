#include <iostream>

using namespace std;

class A1
{
public:
    double a;
    A1(double a) : a(a)
    {
        cout << "A1 constructor..." << endl;
    }
    virtual void show1()
    {
        cout << "A show1" << endl;
    }
};

class A2
{
public:
    double a2;
    virtual void show2()
    {
        cout << "A show2" << endl;
    }
};

class B : virtual public A1,
          virtual public A2
{
public:
    double b;

    void show1()
    {
        cout << "B show1" << endl;
    }
};

class B1 : virtual public A1
{
public:
    double b1;
    B1(double b1) : A1(b1 * 10), b1(b1)
    {
        cout << "B1 constructor..." << endl;
    }
    void show1()
    {
        cout << "B1 show1" << endl;
    }
};

class B2 : virtual public A1
{
public:
    double b2;
    B2(double b2) : A1(b2 * 20), b2(b2)
    {
        cout << "B2 constructor..." << endl;
    }
    void show1()
    {
        cout << "B2 show1" << endl;
    }
};

class C : virtual public B1, virtual public B2
{
public:
    double c;
    C(double c) : A1(c), B1(c), B2(c), c(c)
    {
        cout << "c constructor..." << endl;
    }
    void show1()
    {
        cout << "C show1" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // B b;
    // cout << "b size:" << sizeof(b) << endl;
    // cout << "B addr:" << &b << endl;
    // cout << "A1 addr: " << (A1 *)&b << endl;
    // cout << "A2 addr: " << (A2 *)&b << endl;
    // cout << "B::b addr" << &b.b << endl;

    C c(3.14);

    B1 b1(9.77);
    cout << "c size: " << sizeof(c) << endl;
    cout << "c addr: " << &c << endl;
    cout << "B1 addr: " << (B1 *)&c << endl;
    cout << "B2 addr: " << (B2 *)&c << endl;
    cout << "A1 addr: " << (A1 *)&c << endl;
    cout << "C::c addr: " << &c.c << endl;

    return 0;
}
