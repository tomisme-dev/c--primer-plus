#include <iostream>
#include <fstream>

using namespace std;




int main(int argc, char const *argv[])
{
    int a(3);
    ifstream fin;
    fin.open("a2.txt");

    if(!fin.is_open()) {
        cerr << "文件无法正常打开。" << endl;
        return 1;
    }

    fin.eof();
    fin.good();

    char buf[1024];
    fin.get(buf, 1023);

    cout << buf << endl;

    fin.close();

    return 0;
}
