//
// Created by mtb on 18/08/16.
//

#include <iostream>

using namespace std;

class base {
private:
    /*Private members*/
    int i;

public:
    /*Public members*/
    int k;
    void set_i(int num) {i =num;};
    int get_i() {return i;};


    ~base() {};

};

class derived: public base{
private:
    /*Private members*/
    int j;

public:
    /*Public members*/
    void set_j(int num) {j = num;};
    int get_j() {return j;};


};


int main(int argc, char *argv[]) {
    base *bp,*bpd, bs;
    derived *dp, ds;

    bp = &bs;
    bs.set_i(5);


    std::cout<< bp->get_i()<<endl;

    bpd = &ds;
    bpd->k = 10;
    bpd->set_i(10);
    std::cout<< bpd->get_i()<<endl;

    ((derived *)bp)->set_j(88);
    std::cout<<((derived *)bp)->get_j();

    return 0;
}