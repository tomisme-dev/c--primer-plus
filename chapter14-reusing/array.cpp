#include <valarray>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ints;
    ints.push_back(1);
    ints.push_back(21);
    cout << ints[1] << ", " << ints.size() << endl;

    valarray<double> ds = {1.1, 3.14, 6.99};
    ds[2] = 99.9;
    ds.resize(10);
    cout << ds.max() << endl;

    valarray<int> vals(10);
    return 0;
}
