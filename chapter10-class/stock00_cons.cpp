#include <iostream>

using namespace std;

class Stock {
private:
    string company;
    double price;
    long count;
    double total;

public:
    Stock(const string &company, double price, long count);
    Stock() {
        price = 0;
        count = 0;
        total = 0;
        cout << "defualt constructor..." << endl;
    }
    ~Stock() {
        cout << "destructor..." << endl;
    }
    void show() {
        cout << "company: " << company << ", total: " << total << endl;
    }
};


Stock::Stock(const string &company, double price, long count) {
    this->company = company;
    this->price = price;
    this->count = count;

    this->total = price * count;
}

void test_destructor() {
    {
        Stock s("kingdee", 18, 100);
        s.show();
        cout << "in socpe.." << endl;
    }

    cout << "out scope.." << endl;
    
}

void test2() {
    Stock s("kingdee", 18, 100);
    Stock s2 = Stock("alibaba", 200, 10);
    Stock *s3p = new Stock("tencent", 80, 30);
    s3p->show();

    delete s3p;
    s.show();
    s2.show();
}


void test_const() {
    const Stock s("tencent", 9, 10);
    // s.show(); // compile error
}

void test_obj_arr() {
    Stock stocks[4];

}

int main(int argc, char const *argv[])
{
    // test_destructor();
    // test_const();
    cout << sizeof(Stock) << endl;
    test_obj_arr();
    
    return 0;
}
