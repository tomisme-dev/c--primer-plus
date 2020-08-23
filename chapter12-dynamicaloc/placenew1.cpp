#include "String.hpp"

const int BUF = 512;

class JustTesting
{
private:
    String words;
    int number;

public:
    JustTesting() {
        number = 0;
    }

    JustTesting(const String & words, int n = 0) {
        this->words = words;
        number = n;
    }

    ~JustTesting() {
        cout << "destructor: " << words << endl;
    }
    void show() {
        cout << "words: " << words << ", number: " << number << endl;
    }

};

int main(int argc, char const *argv[])
{

    String s("hello");
    cout << s << endl;
    JustTesting test;
    test.show();
    JustTesting test3(s, 3);
    test3.show();

    char * buf = new char[BUF];
    JustTesting *pc1, *pc2;
    pc1 = new (buf) JustTesting;
    pc2 = new JustTesting(s, 20);

    
    // cout << s3 << endl;


    return 0;
}
