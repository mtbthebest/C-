//
// Created by mtb on 18/08/13.
//
#include <iostream>

using namespace std;
class myclass {
private:
    /*Private members*/
    int a,b;
    
public:
    /*Public members*/
    myclass() {};
    friend int sum(myclass x);
    void set_ab(int i, int j);
    ~myclass() {};
};
int sum(myclass x){
    return x.a + x.b;
}

void myclass::set_ab(int i, int j) {
    a=i;
    b=j;
}

int main(int argc, char *argv[]) {
    myclass m;
    m.set_ab(2,3);
    std::cout<<sum(m);
    

    return 0;
}