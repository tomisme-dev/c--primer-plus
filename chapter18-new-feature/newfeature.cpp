#include <iostream>
#include <atomic>
#include <boost

using namespace std;

int main(int argc, char const *argv[])
{
    atomic_int i(12);
    int x = i.fetch_add(10);
    cout << i.load() << endl;
    
    return 0;
}
