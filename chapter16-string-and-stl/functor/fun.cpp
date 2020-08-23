#include <functional>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
#include <numeric>

using namespace std;

class Add
{
public:
    int adder;
    Add(int adder) : adder(adder){};
    int operator()(int x)
    {
        return adder + x;
    }
};

int main(int argc, char const *argv[])
{
    // plus<int> add;
    // modulus
    // cout << add(1, 5) << endl;
    vector<int> s({5, 6, 7, 8});
    vector<int> t;
    Add adder(10);
    // transform(s.begin(), s.end(), back_insert_iterator<vector<int>>(t), adder);
    // transform(s.begin(), s.end(), back_insert_iterator<vector<int>>(t), bind1st(plus<int>(), 10));

    transform(s.begin(), s.end(), back_insert_iterator<vector<int>>(t), [](int x) -> int { return x + 10; });

    copy(t.begin(), t.end(), ostream_iterator<int>(cout, ", "));

    vector<int> s2({5, 6, 7, 8});

    cout << endl;
    // cout << "s == s2: " << (s == s2) << endl;
    // replace()
    string tomcat = "tomcat";
    sort(tomcat.begin(), tomcat.end());
    cout << tomcat << endl;

    list<int> l({5, 6, 7, 8});
    l.remove(5);
    remove(l.begin(), l.end(), 5);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    return 0;
}
