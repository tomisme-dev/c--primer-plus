#include <unordered_map>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<string, int> p;
    p["tom"] = 10;
    p["jerry"] = 18;
    p.insert({"steven", 22});

    cout << p["jerry"] << ", " << p.size() << endl;

    return 0;
}
