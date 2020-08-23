
#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun1()
    {
    }

    virtual void fun2()
    {
    }

};

void fun(A & a) {
    a.fun1();
    a.fun2();
}


int main(int argc, char const *argv[])
{
    A a;
    cout << sizeof(A) << endl;
    return 0;
}
