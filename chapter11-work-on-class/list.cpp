#include <iostream>

class List {
private:
    static const int MAX = 1024;
    int values[MAX];
    int curIndex;

public:
    List() {
        curIndex = -1;
    }

    List & operator<<(const int &val) {
        values[++curIndex] = val;
        return *this;
    }

    List & operator>>(int &val) {
        val = values[curIndex--];
        return *this;
    }
};


int main(int argc, char const *argv[])
{
    using namespace std;
    List list;
    list << 1 << 2 << 3;

    int val1;
    int val2;
    list >> val1 >> val2;
    
    cout << val1 << ", " << val2 << endl;
    return 0;
}
