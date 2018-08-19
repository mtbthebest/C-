//
// Created by mtb on 18/08/19.
//

#include <iostream>

using namespace std;

template <class T> class Num {
protected:
    T val;
public:
    Num(T x) { val = x; }
    virtual T getval() { return val; }
};

template <class T> class SqrNum : public Num<T> {
public:
    SqrNum(T x) : Num<T>(x) {}
    T getval(){ return val *val;};
};




int main(int argc, char *argv[]) {

    Num<int> *bp,numInt_ob(2);
    SqrNum<int> *dp,sqrInt_ob(3);

    bp = dynamic_cast<Num<int> *>(&sqrInt_ob);
    if(bp) {
        cout << "Cast from SqrNum<int>* to Num<int>* OK.\n";
        cout << "Value is " << bp->getval() << endl;
    } else
        cout << "Error\n";


    return 0;
}
