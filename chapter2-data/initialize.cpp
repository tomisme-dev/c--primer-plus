#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 9;
    int y(99);
    int z{88};
    int a = {18};
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;
    cout << "z=" << a << endl;

    
    return 0;
}
