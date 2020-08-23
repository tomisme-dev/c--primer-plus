#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "bac";
    string s2;
    string s3 = {"hello"};
    string s4 {"world"};
    
    cout << s << endl;
    cout << s2 << endl;
    cout << "请输入姓名：" << endl;
    // cin.read(s2, 1024);
    getline(cin, s2);
    cout << "名字是： " << s2;

    return 0;
}
