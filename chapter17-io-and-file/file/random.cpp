#include <fstream>
#include <iostream>

using namespace std;

struct p
{
    char name[20];
    int age;
};
void showbin();

void test_output()
{
    fstream fio("bin2", ios_base::in | ios_base::out | ios_base::binary);

    p ps[] = {
        {"tom", 12},
        {"jerry", 18},
        {"bolb", 88},
        {"trump", 75}};

    fio.write((char *)ps, sizeof(ps));
    fio.close();

    showbin();
}

void test_seek()
{
    showbin();
    fstream fio("bin2", ios_base::in | ios_base::out | ios_base::binary);

    fio.seekg(sizeof(p) * 2);
    // fio.seekg(sizeof(p) * -1, ios_base::cur);
    p bolb;
    fio.read((char *)&bolb, sizeof(p));

    // 修改数据
    bolb.age = 2;
    fio.seekp(sizeof(p) * 2);
    fio.write((char *)&bolb, sizeof(bolb));

    fio.flush();

    cout << "name: " << bolb.name << ", age: " << bolb.age << endl;
    cout << "current g: " << fio.tellg() << ", current p: " << fio.tellp() << endl;

    fio.close();

    showbin();
}

void showbin()
{
    ifstream fio("bin2", ios_base::in | ios_base::binary);
    p tmp;

    cout << "show start........................................" << endl;
    while (fio.read((char *)&tmp, sizeof(tmp)))
    {
        cout << tmp.name << ", " << tmp.age << endl;
    }
    cout << "show end........................................" << endl;
    fio.close();
}

int main(int argc, char const *argv[])
{
    // test_output();
    test_seek();
    return 0;
}
