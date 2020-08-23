#include <string>
#include <iostream>

using namespace std;

// void show(string & s) {
//     cout << s << endl;
// }
#define SHOW(S) cout<<#S<<": "<<S<<endl

int main(int argc, char const *argv[])
{
    string s1("abc");
    SHOW(s1);
    string s2 = "hello";
    SHOW(s2);
    string s3(10, '$');
    SHOW(s3);
    string s4("good mor", 3);
    SHOW(s4);
    char s[] = "i am so smart";
    string s5(s+1, s+6);
    SHOW(s5);


    return 0;
}
