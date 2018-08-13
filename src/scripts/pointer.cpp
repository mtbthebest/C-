//
// Created by mtb on 18/08/13.
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
//    int x=10,*p;
//    p = &x;
//    std::cout<<p<<endl;
//    std::cout<<*p<<endl;
//

//    int *x[10];
//    int y =4;
//    int *p;
//    p=&y;
//
//    x[0] =p;
//
//    std::cout<<p<<endl;
//    std::cout<<*p<<endl;
//    std::cout<<x[0]<<endl;
//    std::cout<<*x[0]<<endl;



    int *p,y,**q;
    y=4;
    p=&y;
    q =&p;

    std::cout<<p<<endl;
    std::cout<<*p<<endl;
    std::cout<<q<<endl;
    std::cout<<*q<<endl;
    std::cout<<**q<<endl;





    return 0;
}

