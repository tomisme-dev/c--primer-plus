#include <vector>
#include <list>
#include <iostream>
#include <map>

using namespace std;

void test_list() {
    list<int> il;
    il.push_back(6);
    il.push_back(9);
    il.push_back(8);

    for(int i: il) {
        cout << i << endl;
    }

    // cout << *(il.begin() + 1) << endl;
}


void test_vector() {
    vector<int> il;
    il.push_back(6);
    il.push_back(9);
    il.push_back(8);

    // vector<int>::vector i;
    for(auto i = il.begin(); i != il.end(); i++) {
        cout << *i << endl;
    }

    cout << *(il.begin() + 1) << endl;
}


void test_map() {
    map<string, int> persons;
    persons.insert({"tom", 12});

    if(persons.find("tom2") != persons.end()) {
        persons.erase("tom");
    }
    persons.insert({"tom", 18});
    cout << persons.size() << ", " << persons.at("tom") << endl;
}

int main(int argc, char const *argv[])
{
    // test_list();
    // test_vector();
    test_map();
    return 0;
}
