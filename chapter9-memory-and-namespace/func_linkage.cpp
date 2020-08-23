#include <iostream>

using namespace std;

extern "C" void fun1();

extern "C" int add(int, int);

extern "C" {
    void fun2() {
        cout << "fun2" << endl;
    }
}

int add2(int a, int b) {
    return a + b;
}

int main(int argc, char const *argv[])
{
    fun1();
    fun2();
    int val = add(1, 3);
    cout << val << endl;
    return 0;
}


void fun1() {
    cout << "extern c" << endl;
}