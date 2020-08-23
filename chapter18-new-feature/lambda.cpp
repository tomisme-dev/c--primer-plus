#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

using namespace std;

int mycomp(int a, int b, function<int(int, int)> cmp)
{
    cout << "in my comp" << endl;
    return cmp(a, b);
}

void test1()
{
    vector<int> v(10);
    int i = 0;
    generate(v.begin(), v.end(), [&i]() { return i++; });

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
}

int main(int argc, char const *argv[])
{
    int s = 9;
    int m1 = 1;
    int m2 = 2;
    auto cmp1 = [&](int a, int b) { return a * b + m1 + m2 ; };
    auto cmp2 = [](int a, int b) { return a * b ; };
    cout << mycomp(12, 13, cmp1) << endl;
    cout << cmp1(3, 2) << endl;
    // cout << (void *)cmp1-> << endl;
    // cout << (void *)*cmp2 << endl;
    return 0;
}
