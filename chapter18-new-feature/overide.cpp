#include <iostream>

using namespace std;

class S
{
public:
    virtual void f1() {
        cout << "S.f1" << endl;
    }

    virtual void f2() final {
        cout << "S.f2" << endl;
    }
};


class A : public S
{
public:
    void f1() override {
        cout << "A.f1" << endl;
    }

    // void f2() {
    //     cout << "A.f1" << endl;
    // }
};



int main(int argc, char const *argv[])
{
    A a;
    a.f1();
    a.f2();
    return 0;
}
