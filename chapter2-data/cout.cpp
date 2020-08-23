#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // cout << "请输入一个字符：" << endl;
    char c;
    // cin >> c;
    // cout << "你输入的是：" << c << endl;

    c = 'M';
    cout << c << endl;
    cout.put(c);
    cout << endl;
    cout << "\x4d" << endl;

    // cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    // cin >> code;

    char *s = "--\u004d--";
    cout << s << endl;
    return 0;
}
