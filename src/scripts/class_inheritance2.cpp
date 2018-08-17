//
// Created by mtb on 18/08/18.
//

#include <iostream>
using namespace std;
class base {
protected:
    int i, j;
public:
    void set(int a, int b) { i=a; j=b; };
    void show() { cout << i << " " << j << "\n"; }
};
class derived1 : public base {
    int k;
public:
    void setk(){
        std::cout <<"Initializing k values\n";
        k=i * j; }
    void showk() { cout << k << "\n"; }
};

class derived2: private base{
    int k;
public:
    void setk(int a, int b){
        set(a,b);
        std::cout <<"Initializing k values \n";
        k=i * j; }
    void showk() { cout << k << "\n"; }
};

class derived4: public derived2{
    int k;
public:
    void setk() {
//        set(a,b);
        std::cout << "Initializing k values \n";
//        k=i * j; }
    }
    void showk() { cout << k << "\n"; }
};

class derived3: protected base{
    int k;
public:
    void setk(int a, int b){
        set(a,b);
        std::cout <<"Initializing k values \n";
        k=i * j; }
    void showk() { cout << k << "\n"; }
};

class derived5: protected derived3{
    int k;
public:
    void setk(int a, int b){
        set(a,b);
        std::cout <<"Initializing k values \n";
        k=i * j; }
    void showk() { cout << k << "\n"; }
};


int main(int argc, char const *argv[]) {
    derived1 d1;
    d1.set(1,2);
    d1.show();
    d1.setk();
    d1.showk();

    derived2 d2;

    d2.setk(10,5);
    d2.showk();

    derived3 d3;

    d3.setk(2,5);
    d2.showk();


    return 0;
}
