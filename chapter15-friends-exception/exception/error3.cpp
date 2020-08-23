#include <iostream>

using namespace std;


int hmean(int a, int b) {
    using namespace std;
    if(a == -b) {
        throw "untenable arguments to hmean()";
    }

    return 2 * a * b / (a + b);
}


int main(int argc, char const *argv[])
{
    try
    {
        hmean(9, -9);
    }
    catch(const char * e)
    {
        std::cerr << e << '\n';
    }
    
    
    return 0;
}
