
#include <iostream>

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3};
    const int *p = a;

    // *p = 5;
    p++;
    std::cout << *p;
    return 0;
}
