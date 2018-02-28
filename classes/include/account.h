#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        string name; unsigned long nr; double balance;
    public:
      Account(const string&, unsigned long, double);
      Account(const string &);
      bool init(const string &, unsigned long, double);
      void display();
};

#endif 

