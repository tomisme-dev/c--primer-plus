#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

void print_chars(unsigned char *cs, int size) {
    for(int i=0; i < size; i++) {
        printf("%02x ", *(cs + i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char name[4] = {0};
    cout << "请输入姓名："<< endl;
    cin.getline(name, sizeof(name));
    cout << "姓名是：" << name << endl;
    print_chars((unsigned char *)name, 4);
    cout << strlen(name) << endl;

    cout << "请输入姓名2："<< endl;
    cin.getline(name, sizeof(name));
    print_chars((unsigned char *)name, 4);
    cout << "姓名是2：" << name << endl;
    return 0;
}
