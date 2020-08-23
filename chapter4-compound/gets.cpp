#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    const int size = 4;
    char name[size] = {0};

    cout << "first:" << endl;
    cin.get(name, size);
    cin.clear();
    cin.sync();
    cout << name << endl;

    cout << "second:" << endl;
    cin.get(name, size);
    cout << name << endl;
    return 0;
}
