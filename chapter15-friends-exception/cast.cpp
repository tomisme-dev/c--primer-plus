#include <iostream>

using namespace std;


enum Color {
    red, green, blue
};

struct dat {
    short a; short b;
};


int main(int argc, char const *argv[])
{
    int a = 1;
    Color c = static_cast<Color>(a);
    cout << c << endl;


    double d = 3.14;
    int i = static_cast<int>(d);
    cout << i << endl;




    long value = 0xA224B118;
    // dat * pd = reinterpret_cast< dat *>(&value);
    dat * pd = (dat *)(&value);
    unsigned char * byte = (unsigned char *)&value;
    cout << hex << pd->a << endl;

    cout << hex << (unsigned int)byte[0] << endl;
    return 0;
}
