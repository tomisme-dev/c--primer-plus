#include <set>
#include <map>
#include <hash_set>
#include <hash_map>
#include <iostream>
#include <hashtable.h>


using namespace std;
using namespace __gnu_cxx;

int main(int argc, char const *argv[])
{
    set<int> a;
    a.insert({1, 4, 5, 6, 8, 6, 8});
    a.erase(8);

    map<int, string> ids;
    ids.insert({16, "tom"});
    ids.insert(pair<int, string>(88, "jerry"));

    ids.insert({16, "leborn"});
    ids.insert(pair<int, string>(88, "kobe"));

    for(pair<int, string> p: ids) {
        cout << p.first << ": " << p.second << endl;
    }

    map<string, int> person;
    person.insert({"tom", 26});
    person.insert(pair<string, int>("jerry", 66));

    cout << person["jerry"] << endl;
    cout << (person.find("tom3") != person.end()) << endl;

    cout << "================" << endl;
    set<int> s1({1, 3, 5});
    set<int> s2({4, 3, 5, 9});
    set<int> s3;

    // set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<set<int>>(s3, s3.begin()));
    // set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<set<int>>(s3, s3.begin()));
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<set<int>>(s3, s3.begin()));

    for(int i: s3) {
        cout << i << ", ";
    }

    cout << endl;

    cout << "================" << endl;

    


    return 0;
}
