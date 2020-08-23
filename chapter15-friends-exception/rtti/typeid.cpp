#include <iostream>
#include <typeinfo>

using namespace std;

class A {
public:
    virtual ~A() {}
};
class B : public A {};
class C : public B {};


void show(A *a) {

    if (typeid(C) == typeid(*a)) {
        cout << "a is C" << endl;
    }


    if (typeid(B) == typeid(*a)) {
        cout << "a is B" << endl;
    }


    if (typeid(A) == typeid(*a)) {
        cout << "a is A" << endl;
    }

    const type_info & ainfo = typeid(*a);
    cout << ainfo.name() << endl;
}

int main(int argc, char const *argv[])
{
    C c;

    A * a = &c;

    show(a);

    // type_info info = typeid(a);
    // cout << info.name() << endl;


    // C *ptr = dynamic_cast<C *>(a);
    // if(ptr) {
    //     cout << "true..." << endl;
    // }
    return 0;
}
