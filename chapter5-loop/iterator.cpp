#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double ds[] = {1.4, 7.9, 8.8};

    for (double &d: ds) {
        d *= 2;
    }

    for (double &d: ds) {
        cout << d << endl;
    }
    return 0;
}
