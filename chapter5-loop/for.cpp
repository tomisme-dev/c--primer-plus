#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "hello";
    for(char c: s) {
        cout << c << endl;
    }

    cout << "===========================" << endl;
    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }
    return 0;
}
