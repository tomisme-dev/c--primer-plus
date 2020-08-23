#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ostream fin("hello.txt", ostream::app);

    fstream fout;
    fout.open("hello2.txt", ios_base::out | ios_base::app);
    fout << "不错哦";
    fout.close();
    return 0;
}
