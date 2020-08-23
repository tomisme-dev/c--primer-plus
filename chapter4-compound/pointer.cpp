#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 88;
    int *p;
    p = (int *)0x7fffffffd9ac;
    cout << p << endl;
    cout << *p << endl;
    cout << &a << endl;
    return 0;
}
