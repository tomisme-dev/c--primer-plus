#include <iostream>

using namespace std;

class A
{
public:
    int val = 10;
    // A(const A & a)
    // {
    //     val = 1111;
    //     cout << "Constructor...." << endl;
    // }

    A() {}
};

void
func(A a)
{
    cout << "func..." << a.val << endl;
}

int main(int argc, char const *argv[])
{
    A a;
    func(a);
    return 0;
}
