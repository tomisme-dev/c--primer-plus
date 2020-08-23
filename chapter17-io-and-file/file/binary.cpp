#include <fstream>
#include <iostream>

using namespace std;

struct val
{
    long x;
    int y;
    long z;
};

void test_bin()
{
    ofstream fout("bin2", ios_base::out | ios_base::binary);
    int a = 0x123456;
    fout.write((char *)&a, sizeof(a));
    fout.close();

    int val = 0;
    ifstream fin("bin2", ios_base::in | ios_base::binary);
    fin.read((char *)&val, sizeof(val));
    fin.close();

    cout << hex;
    cout << val << endl;
}


void test_struct_bin() {
    val a = {1, 2, 3};
    ofstream fout("bin2", ios_base::out | ios_base::binary);
    fout.write((char *)&a, sizeof(a));
    fout.close();


}
int main(int argc, char const *argv[])
{
    test_struct_bin();
}