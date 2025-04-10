#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

//Class prototype to allow Account to see the private information from Bank
class Bank;

enum AType{CHECKING,SAVING};

class Account
{
    private:
        int id;
        std::string owner;
        AType type;
        double balance;

    public:
        Account( int i, std::string o, AType t, double b): id(i), owner(o), type(t), balance(b)
        {};
        friend void printAll( const Bank &b, Account acs[], int s );

};

#endif