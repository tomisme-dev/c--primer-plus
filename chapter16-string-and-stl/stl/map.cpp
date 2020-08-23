#include <map>
#include <iostream>
#include <valarray>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> ps;
    ps["tom"] = 12;
    ps["tom"] = 18;
    cout << ps["tom"] << endl;

    valarray<int> val(10);
    begin(val);

    initializer_list<double> ds = {1, 2, 3, 4};
    cout << ds.begin()[1] << endl;
    ios;
    streambuf
    return 0;
}
