#include <iostream>

using namespace std;

typedef char * cp;

int main(int argc, char const *argv[])
{

    int x = 0x1234;
    char *p = (cp)&x;
    char *p2 = cp(&x);
    // cp p3 = static_cast<cp> (&x);


    cout << x << endl;
    cout << (int)*p << endl;
    cout << (int)*p2 << endl;

    cout << static_cast<int>(*p) << endl;

    return 0;
}
