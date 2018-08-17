//
// Created by mtb on 18/08/18.
//

#include <iostream>
#include <cstring>
#include <new>

using namespace std;

class balance {
private:
    /*Private members*/
    double bal;
    char name[80];

public:
    /*Public members*/
    balance(double n, char *s) {
        bal = n;
        strcpy(name,s);
    };

    void get_balance(double &n, char *s){
        n = bal;
        strcpy(s,name);
    }


    ~balance() {};

};

int main(int argc, char *argv[]) {

    balance *p;
    char s[80];
    double n;

    try {
        p = new balance(10.0,"Jack Simson");

    }catch(bad_alloc){
        std::cout<<"Failure";
    }

    p->get_balance(n,s);

    std::cout<<n<<endl;
    std::cout<<s;


    return 0;
}

