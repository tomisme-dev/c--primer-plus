#include <iostream>

using namespace std;

void add(int &val) {
    val++;
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void swap(int *a, int *b) {
    int c = *a;
    int *a = *b;
    *b = c;
}


int main(int argc, char const *argv[])
{
    int a = 8;
    int &b = a;

    // cout << "a=" << a <<  endl;
    // cout << "b=" << b <<  endl;

    b = 12;
    add(a);

    cout << "a=" << a <<  endl;
    cout << "b=" << b <<  endl;


    return 0;
}
