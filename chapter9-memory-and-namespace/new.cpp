#include <iostream>

using namespace std;

char buf[1024] = {0};

int main(int argc, char const *argv[])
{
    double *di = new double{9.9};
    int *arr = new int[3]{1, 2, 9};
    cout << *di << endl;
    cout << arr[1] << endl;

    int *p = new (buf) int[20];
    p[0] = 1;
    p[1] = 9;
    cout << p << "; " << (void *)buf << endl;
    cout << (int)buf[0] << endl;

    // delete [] p;
    delete di;
    delete [] arr;
    return 0;
}
