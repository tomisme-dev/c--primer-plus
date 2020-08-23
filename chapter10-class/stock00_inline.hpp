#ifndef STOCK00_HPP_
#define STOCK00_HPP_

#include <string>
using std::string;

class Stock {
private:
    long shares;
    string company;
    double share_val;
    double total_val;

public:
    void acquire(const string &co, long n, double price);
    void buy(long number, double price);
    void sell(long number, double price);
    void update(double price);
    void show();

    void set_total();
};



#endif