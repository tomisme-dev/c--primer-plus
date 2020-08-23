#include <iostream>

using namespace std;


class Constant {
    public:
    enum { MONTHS=12 };
    static const int month = 10;
    double costs[month];
    double days[MONTHS];
};


int main(int argc, char const *argv[])
{
    Constant c;
    cout << c.month << endl;
    return 0;
}
