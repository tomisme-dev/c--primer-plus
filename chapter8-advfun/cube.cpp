#include <iostream>
using namespace std;

double cube(int a) {
    a *= a * a;
    return a;
}


double cuberef(int &a) {
    a *= a * a;
    return a;
}

double cuberef2(const int &a) {
    return a * a * a;
}

double cuberef3(long &a) {
    return a * a * a;
}


int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 3;
    cout << "cube1: " << cube(a) << endl;
    cout << "cube2: " << cuberef2(2) << endl;
    cout << "cube2: " << cuberef2(b) << endl;

    double d = 5.0;
    cuberef2(d);

    long l = 9L;
    cuberef3(l);
    return 0;
}
