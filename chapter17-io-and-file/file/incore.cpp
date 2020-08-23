#include <sstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ostringstream ostr;
    ostr << "hello, " << "tom";

    string s = ostr.str();
    cout << s << endl;

    istringstream istr("123 456 789");
    int a;
    istr >> a;
    cout << a << endl;
    istr >> a;
    cout << a << endl;
    return 0;
}
