#include <iostream>

using namespace std;

void test2()
{
    int sum = 0;
    int input = 0;
    while (cin >> input)
    {
        sum += input;
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    cout << "Now enter a new number: ";
    cin.clear();

    while(!isspace(cin.get())) { }
    cin >> input; // won't work
    cout << "new number: " << input << endl;
}

void test1() {
    cin.exceptions(cin.failbit);
    cout << "exception: " << cin.exceptions() << endl;
    int age;
    cin >> age;
    cout << "fail " << cin.fail() << endl;
    cout << "eof " << cin.eof() << endl;
    cout << "bad " << cin.bad() << endl;
}


int main(int argc, char const *argv[])
{
    test2();
}