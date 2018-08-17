
//
// Created by mtb on 18/08/16.
//
#include <iostream>

using namespace std;

class cl {
private:
    /*Private members*/

public:
    /*Public members*/

    int swap(int &i, int &j);

};

int cl::swap(int &i, int &j) {
    int t ;
    t =i;
    i=j;
    j=t;
}

int main(int argc, char *argv[]) {

    cl base;
    int x,y;
    x=10, y=20;
    base.swap(x,y);
    std::cout<<x<<endl;
    std::cout<<y<<endl;



    return 0;
}
