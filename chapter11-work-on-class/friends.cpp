#include <iostream>

using namespace std;

class Friend {
    friend void say() {
        cout << "friend, hello" << endl;
    }


};


int main(int argc, char const *argv[])
{
    // say();
    return 0;
}
