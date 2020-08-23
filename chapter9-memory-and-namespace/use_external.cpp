#include <iostream>

using namespace std;

extern int age;

int sum(int a, int b);

int main(int argc, char const *argv[])
{
    cout << "age: " << age << endl;
    cout << "sum: " << sum(1, 3) << endl;
    return 0;
}
