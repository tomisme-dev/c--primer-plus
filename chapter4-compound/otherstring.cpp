#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{

    wchar_t s1[] = L"你好";
    char16_t s2[] = u"你好";
    char32_t s3[] = U"你好";
    cout << s1 << " " << sizeof(s1) << endl;
    cout << s2 << " " << sizeof(s2) << endl;
    cout << s3 << " " << sizeof(s3) << endl;

    string rawStr = R"(你好\n"
    tom" 先生)";
    cout << rawStr << endl;
    rawStr = R"+*((你们)
    好)+*";
    cout << rawStr << endl;

    string u8Str = u8"你好";
    cout << u8Str << " " << sizeof(u8Str) << endl;

    string s4 = "你好";
    cout << s4 << " " << sizeof(s4) << endl;

    char s5[] = "你好";
    cout << s5 << " " << sizeof(s5) << " " << (int)s5[6] <<  endl;



}