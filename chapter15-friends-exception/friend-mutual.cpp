#include <iostream>

using namespace std;

class A;

class B {
private:
    friend class A;
    int val;
public:
    B(int val) : val(val) {}
    void show(A & a);
};

class A {
private:
    friend class B;
    int val;
public:
    A(int val) : val(val) {}
    void show(B & b) {
        cout << "b.val" << b.val << endl;
    }
};


void B::show(A & a) {
    cout << "a.val" << a.val << endl;
}


int main(int argc, char const *argv[])
{
    A a(88);
    B b(99);
    cout << "call a.show" << endl;
    a.show(b);
    cout << "call b.show" << endl;
    b.show(a);
    return 0;
}
