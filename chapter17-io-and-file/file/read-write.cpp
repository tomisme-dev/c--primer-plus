#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin("hello.txt");

    cout << "is open: " << fin.is_open() << endl;
    cout << "is open: " << (bool)fin << endl;

    string msg;
    getline(fin, msg);

    fin.close();

    cout << "获得: " << msg << endl;
    return 0;
}
