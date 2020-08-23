#include <iostream>
using namespace std;

string concat1(const string & s1, const string & s2) {
    string temp = s1 + s2;
    cout << "temp: " << &temp << endl;
    return temp;

}


string & concat2(string & s1, string & s2) {
    s1 = s1 + s2;
    // cout << "temp: " << &s1 << endl;
    return s1;

}


// string & concat3(string & s1, string & s2) {
//     string temp = s1 + s2;
//     // cout << "temp: " << &s1 << endl;
//     return temp;

// }

int main(int argc, char const *argv[])
{
    string s1 = "hello";
    string s2 =  "world";
    // string s4 =  "world";

    string& s3 = concat2(s1, s2);
    // string s5 =  "world";
    cout << &s3 << "  " << s3 << endl;
    cout << &s1 << endl;
    cout << &s2 << endl;
    return 0;
}
