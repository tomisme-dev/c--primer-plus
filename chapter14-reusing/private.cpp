#include <iostream>

using namespace std;

class SuperClass
{
private:
    void private_call()
    {
        cout << "super private call" << endl;
    }

public:
    SuperClass(/* args */){};
    ~SuperClass(){};
    void say()
    {
        cout << "super say..." << endl;
    }
};

class SubClass : protected SuperClass
{
private:
    /* data */
public:
    SubClass(/* args */){};
    ~SubClass(){};
    void myName()
    {
        cout << "sub myName" << endl;
        // say();
        SuperClass &sup = *this;
        sup.say();
    }

    // void say()
    // {
    //     SuperClass::say();
    // }
    using SuperClass::say;
};

int main(int argc, char const *argv[])
{
    SubClass sub;
    // sub.myName();
    sub.say();

    return 0;
}
