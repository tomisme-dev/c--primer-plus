#include <iostream>

using namespace std;

class A;

class B {
private:
    friend void say(A & a, B & b);
    void hello() {
        cout << "B hello" << endl;
    }
};

class A {
private:
    friend void say(A & a, B & b);
    void hello() {
        cout << "A hello" << endl;
    }
};


void say(A & a, B & b) {
    a.hello();
    b.hello();
}


int main(int argc, char const *argv[])
{
    A a;
    B b;
    say(a, b);

    return 0;
}
