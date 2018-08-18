//
// Created by mtb on 18/08/18.
//
#include <iostream>

using namespace std;


template <class X> void swapargs(X &a, X &b){
    X temp;
    temp =a;
    a=b;
    b=temp;
}



template <class T1, class T2> void func(T1 x, T2 y){
    std::cout<<x<<" , "<<y<<endl;
}

template <class T1> void func(T1 x, int y){
    std::cout<<y<<endl;
}


template <typename X> void swapargs2(X &a, X &b){
    X temp;
    temp =a;
    a=b;
    b=temp;
}
int main(int argc, char *argv[]) {

    int i=10,j=20;
    double x=10.0, y=40.0;
    swapargs(i,j);
    swapargs(x,y);

    std::cout <<i<<" , "<<j<<endl;
    std::cout <<x<<" , "<<y<<endl;


    func(j,i);
    func(j,x);



    return 0;
}
