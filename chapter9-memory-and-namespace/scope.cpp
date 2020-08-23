#include <iostream>

using namespace std;

int age = 18;

int main(int argc, char const *argv[])
{
    int age = 9;

    {
        int age = 1;
        cout << "local age: " << age << endl;
        cout << "global age: " << ::age << endl;
    }

    return 0;
}
