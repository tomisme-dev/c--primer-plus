#include <iostream>
#include <string>

using namespace std;

void read_tail(istream & in) {

    // while (!in.eof() && in.get() != '\n')
    // {

    // }
    // cout << in.eof() << endl;

}

void test_readline() {
    cout << "input you word:" << endl;
    string word1;
    getline(cin, word1);
    read_tail(cin);
    cout << "word1: " << word1 << endl;

    cout << "input you word2:" << endl;
    getline(cin, word1);
    // read_tail(cin);
    cout << "word2: " << word1 << endl;
}


int main(int argc, char const *argv[])
{
    // string name;
    // cin >> name;
    // cout << "first name: " << name << endl;
    // read_tail(cin);
    // cin >> name;
    // cout << "last name: " << name << endl;

    cout << "max capacity: " << string::npos << endl;


    return 0;
}
