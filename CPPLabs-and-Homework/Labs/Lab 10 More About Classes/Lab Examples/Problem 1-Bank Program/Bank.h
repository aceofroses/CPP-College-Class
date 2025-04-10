#ifndef BANK_H
#define BANK_H
#include <iostream>

//Class prototype to allow Account to see the private information from Account
class Account;

enum BType{COMMERCIAL, THRIFTS, CREDIT_UNION};

class Bank
{
    private:
    std::string name;

    BType type;
    std::string address;
    public:
    Bank(std::string n, BType t, std::string a): name(n), type(t), address(a)
    {}
    friend void printAll( const Bank &b, Account acs[], int s );

};

#endif