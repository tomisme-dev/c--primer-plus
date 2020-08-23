#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ios；
    // wios;
    // wcout.imbue(locale("chinese"));
    cout.put();
    cout.write()
    const wchar_t * word = L"你好";
    cout << word << endl;
    wcout << word << flush;
    

    clog << "hello" << endl;
    return 0;
}
