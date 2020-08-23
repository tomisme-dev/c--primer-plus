#include <iostream>

using namespace std;

class SuperAbc
{
public:
    void show() {
        cout << "super show" << endl;
    }

    virtual void say() = 0;
};

void SuperAbc::say() {
    cout << "super say" << endl;
}

class SubClass1: public SuperAbc
{
public:
    void say() {
        SuperAbc::say();
        cout << "SubClass1 say" << endl;
    }
};

int main(int argc, char const *argv[])
{
    SubClass1 sup;
    sup.show();
    sup.say();

    return 0;
}
