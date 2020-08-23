#include <iostream>

int inc(int a, int delta=1);

int inc2(const int a, int delta=8) {
    return a + delta;
}

// int inc3(const int a, int delta=8, int c) {
//     return a + delta + c;
// }

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << inc(4) << endl;
    cout << inc2(8) << endl;
    return 0;
}


int inc(const int a, int delta) {
    return a + delta;
}