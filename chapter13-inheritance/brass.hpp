#ifndef BRASS_HPP_
#define BRASS_HPP_

#include <string>
using std::string;

class Brass
{
private:
    string fullName;
    long acctNum;
    double balance;

public:
    Brass(const string &fullName = "Nullbody", long acctNum = -1, double balance = 0);
    void deposit(double amount);
    virtual void withdraw(double amount);
    double getBalance() const;
    virtual void viewAccount() const;
    virtual ~Brass() {}
};

class BrassPlus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const string &fullName = "Nullbody", long acctNum = -1, double balance = 0, doulbe maxLoan = 500, double rate = 0.11125);
    BrassPlus(const Brass &brass, double maxLoan = 500, double rate = 0.11125) ~BrassPlus();
    virtual void viewAccount() const;
    virtual void withdraw(double amount);
    void setMaxLoan(double maxLoan)
    {
        this->maxLoan = maxLoan;
    }
    void setRate(double rate)
    {
        this->rate = rate;
    }
    void resetOwesBank()
    {
        owesBank = 0;
    }
};

#endif