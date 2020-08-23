#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream fout;
    fout.open("a.txt");
    fout << "hello";
    fout.write(" world", 6);

    fout.close();
    return 0;
}
