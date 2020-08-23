#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    // wchar_t w[] = "good";
    wstring ws(L"你好");
    cout << ws.size() << endl;
    string s("你好");
    cout << s.size() << endl;
    return 0;
}
