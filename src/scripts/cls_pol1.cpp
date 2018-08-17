//
// Created by mtb on 18/08/18.
//
#include <iostream>
using namespace std;

class base {
public:
    virtual void vfunc() {
        cout << "This is base's vfunc().\n";
    }
//    virtual void show() = 0;
};

class derived1 : public base {
public:
    void vfunc() {
        cout << "This is derived1's vfunc().\n";
    }

};

class derived2 : public base {
public:
    void vfunc() {
        cout << "This is derived2's vfunc().\n";
    }
};

class derived3 : public derived1 {
public:
//    void vfunc() {
//        cout << "This is derived3's vfunc().\n";
//    }
};

void f(base &r){
    r.vfunc();
}

int main(int argc, char const *argv[]) {

    base *p,b;
    derived1 d1;
    derived2 d2;
    derived3 d3;

    p=&b;
    p->vfunc();
    d1.vfunc();
    p=&d2;
    p->vfunc();

    f(b);
    f(d1);

    d3.vfunc();

    return 0;
}
