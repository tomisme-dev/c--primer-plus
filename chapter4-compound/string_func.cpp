#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "hello";
    string s2;
    s2 = s1 + s1;

    char s3[1024] = "hello";
    strcat(s3, " gogo");

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s2.size() << endl;
    cout << s3 << endl;

    cout << "请输入姓名：" << endl;
    getline(cin, s2);

    cout << "姓名是：" << s2 << endl;

    
    return 0;
}
