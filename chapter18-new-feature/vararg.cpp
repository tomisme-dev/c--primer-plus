#include <iostream>

using namespace std;

// definition for 0 parameters
void show_list() {}


// definition for 1 parameter
template <typename T>
void show_list(const T &value)
{
    std::cout << value << '\n';
}

// definition for 2 or more parameters
template <typename T, typename... Args>
void show_list(const T &value, const Args &... args)
{
    std::cout << value << ", ";
    show_list(args...);
}


int main(int argc, char const *argv[])
{
    show_list(1, "2", '3');
    return 0;
}
