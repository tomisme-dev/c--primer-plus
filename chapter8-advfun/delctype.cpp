#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a = 12.7F;
    decltype(a) m;
    m = a;

    cout << sizeof(m) << " " << m << endl;
    return 0;
}
