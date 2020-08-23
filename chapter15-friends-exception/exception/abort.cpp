#include <iostream>

#include <cstdlib>

double hmean(double a, double b);

int main(int argc, char const *argv[])
{
    double result = hmean(9.3, -9.3);
    std::cout << "result: " << result << std::endl;
    return 0;
}

double hmean(double a, double b) {
    using namespace std;
    if(a == -b) {
        cout << "untenable arguments to hmean()" << endl;
        abort();
    }

    return 2 * a * b / (a + b);
}
