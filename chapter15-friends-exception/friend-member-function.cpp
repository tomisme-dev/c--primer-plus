#include <iostream>
using namespace std;

class TV;

class Remote
{
public:
    void control(TV & tv);
    void on(TV & tv);
};

class TV
{
private:
    int val;
    void show() {
        cout << "TV val: " << val << endl;
    }
public:
    explicit TV(int val) : val(val) {}
    friend void Remote::control(TV & tv);

};


void Remote::control(TV & tv) {
    cout << "Remote " << tv.val << endl;
    tv.show();
}

void Remote::on(TV & tv) {
    // tv.show();
}




int main(int argc, char const *argv[])
{
    TV tv(8848);
    Remote r;
    r.control(tv);
    r.on(tv);
    return 0;
}
