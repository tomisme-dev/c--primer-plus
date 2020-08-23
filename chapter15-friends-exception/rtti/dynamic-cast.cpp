#include <iostream>

using namespace std;

class A {
public:
    virtual ~A() {

    }
};

class B1 : public A {
public:
    void showB1() {
        cout << "show b1" << endl;
    }
};


class B2 : public A {
public:
    void showB2() {
        cout << "show b2" << endl;
    }
};


void show(A & a) {
    A * aPtr = &a;

    B1 * b1Ptr = dynamic_cast<B1 *>(aPtr);
    if (b1Ptr != nullptr) {  
        b1Ptr->showB1();
    }

    B2 * b2Ptr = dynamic_cast<B2 *>(aPtr);
    if(b2Ptr != nullptr) {
        
        b2Ptr->showB2();
    }
}


int main(int argc, char const *argv[])
{
    B1 b1;
    B2 b2;

    A & a = b2;
    show(a);
    return 0;
}
