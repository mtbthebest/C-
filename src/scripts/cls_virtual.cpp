//
// Created by mtb on 18/08/18.
//

#include <iostream>

using namespace std;

class base {
private:
    /*Private members*/

public:
    /*Public members*/
    int i;

};

class derived1: virtual public base{
private:
    /*Private members*/

public:
    /*Public members*/
    int j;

};

class derived2: virtual public base{
private:
    /*Private members*/

public:
    /*Public members*/
    int k;

};

class derive3: public derived1, public derived2{
private:
    /*Private members*/

public:
    /*Public members*/
    int sum;

};

int main(int argc, char *argv[]) {

    derive3 ob;
    ob.i = 10;
    ob.j = 20;
    ob.k = 30;
    ob.sum = ob.i + ob.j + ob.k;
    std::cout <<ob.sum;


    return 0;
}

