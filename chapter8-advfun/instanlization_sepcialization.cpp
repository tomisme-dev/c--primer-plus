#include <iostream>

using namespace std;

template <typename T>
void Swap(T &t1, T &t2) {

}

template void Swap<char>(char &, char &);

template <> void Swap<int>(int &, int &) {
    
}

int main(int argc, char const *argv[])
{
    // template void Swap<char>(char &, char &);

    

    // int a = 9;
    // int b = 10;

    // Swap(a, b);
    cout << "finished..." << endl;
    return 0;
}