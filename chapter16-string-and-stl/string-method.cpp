#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    char c1[] = "hello word";
    char c2[] = "hello word";

    string s1(c1);
    string s2(c2);

    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s1 > s2: " << (s1 > s2) << endl;
    cout << "s1 < s2: " << (s1 < s2) << endl;

    cout << (c1 == c2) << endl;

    int po = s2.find("wo2");
    cout << po << endl;

    s1.length();
    s2.size();

    s1.append(" i am ok");
    s1.reserve(100);
    cout << "new s1: " << s1 << endl;
    cout << "capacity: " << s1.capacity() << endl;

    return 0;
}
