#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char name[] = "tom";

    const char *s = "tom";

    cout << sizeof(name) << endl;
    cout << strlen(name) << endl;
    cout << strlen(s) << endl;

    
    return 0;
}
