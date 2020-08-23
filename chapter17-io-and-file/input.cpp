#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cin >> hex;
    cout << "input your name and age:" << endl;
    char name[20];
    int age = 0;

    cin >> name >> age;

    cout << "name: " << name << ", age: " << age << endl;
    cin.eof();
    cin.setstate(cin.eofbit);
    cin.clear(cin.failbit);
    cin.eofbit()
}