#include <iostream>
using namespace std;

enum class egg {Small, Medium, Large, Jumbo};
enum class t_shirt {Small, Medium, Large, Xlarge};

int main(int argc, char const *argv[])
{
    egg e = egg::Medium;
    t_shirt t = t_shirt::Large;

    if(e == egg::Medium) {
        cout << "egg equal medium" << endl;
    }

    if(e < egg::Large) {
        cout << "egg  less than large" << endl;
    }

    // cout << (int)egg::Small << endl;
    // cout << (int)t_shirt::Medium << endl;
    return 0;
}
