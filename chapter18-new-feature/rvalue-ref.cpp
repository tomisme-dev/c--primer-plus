#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void f(int && a) {
    cout << "a=" << a << endl;
}

int main(int argc, char const *argv[])
{
    

    int a = 10;
    int &&b = 11;
    int &&c = move(a);
    int &&d = (int &&)a;
    // int &&e = d; // compile error

    cout << &a  << ": " << a << endl;
    cout << &b << ": " << b << endl;
    cout << &c << ": " << c << endl;
    cout << &d << ": " << d << endl;
    // cout << &e << ": " << e << endl;
    f(move(a));

    f(static_cast<int &&>(a));

    f((int &&)a);

    
    return 0;
}
