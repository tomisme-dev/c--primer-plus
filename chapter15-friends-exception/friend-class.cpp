#include <iostream>
using namespace std;

class TV
{
private:
    int val;
    void show() {
        cout << "TV val: " << val << endl;
    }
public:
    friend class Remote;
    explicit TV(int val): val(val) {}

};


class Remote
{
private:
    /* data */
public:
    void control(TV & tv) {
        cout << "Remote " << tv.val << endl;
        tv.show();
    }
};


int main(int argc, char const *argv[])
{
    TV tv(8848);
    Remote r;
    r.control(tv);
    return 0;
}
