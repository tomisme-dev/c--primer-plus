#include <iostream>
#include "stock00.hpp"

using namespace std;


void Stock::acquire(const string &co, long n, double price) {
    company = co;
    if(n < 0) {
        cout << "count must great than 0." << endl;
    } else {
        shares = 0;
    }

    shares = n;

    share_val = price;
    set_total();
}

void Stock::buy(long number, double price) {
    // cout << "Stock.buy: " << number << ", " << price;
    shares += number;
    share_val = price;
    set_total();
}

void Stock::sell(long number, double price) {
    shares -= number;
    share_val = price;
    set_total();
}

void Stock::update(double price) {
    share_val = price;
    set_total();
}


void Stock::show() {
    cout << "company: " << company << ", price: " << share_val << ", count: " << shares << ", total: " << total_val << endl;
}

int main(int argc, char const *argv[])
{
    Stock s;
    cout << &s << endl << " size:" << sizeof(s) << endl;
    s.acquire("kingdee", 90, 8.8);
    s.buy(10, 11);
    s.sell(20, 20);
    s.update(15);
    s.show();
    
    return 0;
}
