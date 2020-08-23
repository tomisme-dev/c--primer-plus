#include <iostream>

using namespace std;

class A1
{
public:
    void show()
    {
        cout << "A1 show" << endl;
    }
};

class A2
{
public:
    void show()
    {
        cout << "A2 show" << endl;
    }
};

class B : public A1, public A2
{
public:
    // void show()
    // {
    //     A2::show();
    //     A1::show();
    //     cout << "B show" << endl;
    // }
};


int main(int argc, char const *argv[])
{
    B b;
    b.A1::show();
    return 0;
}
