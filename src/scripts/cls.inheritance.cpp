//
// Created by mtb on 18/08/18.
//

#include <iostream>
using namespace std;
class base {
    int i, j;
public:
    void set(int a, int b) { i=a; j=b; };
    void show() { cout << i << " " << j << "\n"; }
};
class derived1 : public base {
    int k;
public:
    derived1(int x) { k=x; }
    void showk() { cout << k << "\n"; }
};


class derived2 : private base {
    int k;
public:
    derived2(int x) { k=i *j; }
    void showk() { cout << k << "\n"; }
};

int main(int argc, char const *argv[]) {
    derived1 d1(1);
    derived2 d2(2);
    d1.set(2,4);
    d1.show();

    d1.showk();

    d2.showk();



    return 0;
}
