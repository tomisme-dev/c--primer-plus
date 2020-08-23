#include <iostream>

using namespace std;


class A
{
public:
    double a;
    virtual void show1()
    {
        cout << "A show1" << endl;
    }
};

class B1 : virtual public A
{
public:
    double b1;
};

class B2 : virtual public A
{
public:
    double b2;
};

class C : public B1, public B2
{
public:
    double c;
};


int main(int argc, char const *argv[])
{
    C c;
    cout << "c size: " << sizeof(c) << endl;
    cout << "C addr: " << &c << endl;
    cout << "B1 addr: " << (B1 *)&c << endl;
    cout << "B2 addr: " << (B2 *)&c << endl;
    cout << "A addr: " << (A *)&c << endl;
    cout << "C.c addr: " << &c.c << endl;

    cout << "A size: " << sizeof(A) << endl;
    return 0;
}
