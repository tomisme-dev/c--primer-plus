#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    int guest = 0;
    while(guest++ < 10) {
        cout << guest << endl;
    }

    string s1 = "hello";
    string s2 = s1;
    s2[0] = 'w';


    cout << s1 << " " << s2 << endl;
    cout << (s2 == s1) << endl;



    cout << "final guest=" << guest << endl;
    return 0;
}
