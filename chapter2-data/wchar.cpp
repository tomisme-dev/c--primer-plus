#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    wchar_t c = L'你';
    unsigned char *cp = (unsigned char *)&c;
    cout << sizeof(c) << endl;
    cout << hex;
    cout << c << endl;
    printf("%2x-%2x-%2x-%2x\n", cp[0], cp[1], cp[2], cp[3]);

    char16_t c16 = u'你';
    char32_t c32 = U'你';
    cout << c16 << endl;
    cout << c32 << endl;
    return 0;
}
