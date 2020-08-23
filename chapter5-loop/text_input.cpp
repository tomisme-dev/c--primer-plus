#include <iostream>

using namespace std;


void read2() {
    char ch;
    cout << "清随意输入：" << endl;
    while(!cin.get(ch).fail()) {
        cout << "读取到：" << ch << " " << (int) ch << endl;
    }

}


void read3() {
    cout << "清随意输入：" << endl;
    int ch;
    while((ch = cin.get()) != EOF) {
        cout << "读取到：" << (char)ch << " " << ch << endl;
    }
}


int main(int argc, char const *argv[])
{
    // char ch;
    // cin.get(ch);
    // while(!cin.fail()) {
    //     cin.get(ch);
    //     cout << "读取到：" << ch << " " << (int) ch << endl;
    // }
    // read2();
    read3();


    return 0;
}
