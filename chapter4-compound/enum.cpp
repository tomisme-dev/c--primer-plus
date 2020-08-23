#include <iostream>

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

enum bits {one = 1, two = 2, four = 4, eight = 8};

using namespace std;

int main(int argc, char const *argv[])
{
    spectrum s = red;
    cout << s << endl;
    cout << two << endl;

    bits b = bits(80);

    cout << b << endl;
    cout << &b << endl;
    return 0;
}
