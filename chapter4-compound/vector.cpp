#include <iostream>
#include <vector>
#include <array>

using namespace std;

int ftest() {
    int x = 66;
    vector<int> v(11);
    int y = 99;
    cout << sizeof(v) << endl;
}

int main(int argc, char const *argv[])
{
    const int size = 1024;
    vector<double> v;
    v.push_back(12);
    v.push_back(13);
    cout << v.size() << endl;

    array<int, size> arr;
    arr[0] = 12;
    arr.at(0) = 13;

    cout << "array size： " << arr.size() << endl;
    cout << "arr[0]=" << arr.at(0) << endl;

    ftest();
    
    return 0;
}
