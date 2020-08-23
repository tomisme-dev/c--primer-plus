#include <iostream>

using namespace std;

class DefaultCon {
private:
    string name;

public:
    DefaultCon(string name) {
        cout << "my constructor..." << endl;
        this->name = name;
    }

    DefaultCon(DefaultCon & con) {
        cout << "copy constructor..." << endl;
        this->name = con.name;
    }

    DefaultCon() {}

    DefaultCon & operator=(DefaultCon & con) {
        if(&con == this) {
            return *this;
        }
        cout << "opertor=..." << endl;
        
        this->name = con.name;
        // DefaultCon result(con.name);
        cout << "result addr: " << this << endl;
        return *this;
    }

    void showName() {
        cout << name << endl;
    }
};

int main(int argc, char const *argv[])
{
    DefaultCon de("tom");
    DefaultCon de2 = de;
    DefaultCon de3;
    de3 = de;

    cout << "de3 addr: " << &de3 << endl;
    cout << "de addr: " << &de << endl;

    de.showName();
    de2.showName();
    de3.showName();
    return 0;
}
