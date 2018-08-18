//
// Created by mtb on 18/08/18.
//
#include <iostream>

using namespace std;


template <class X> void bubble(X *items, int count){
   int a,b;
   X t;


    for(a=1; a<count; a++)
        for(b=count-1; b>=a; b--)
            if(items[b-1] > items[b]) {
                t = items[b-1];
                items[b-1] = items[b];
                items[b] = t;
            }

}



int main(int argc, char *argv[]) {
    int iarray[7] = {7, 5, 4, 3, 9, 8, 6};
    double darray[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
    for(int i=0;i<7;i++){
        std::cout<<iarray[i]<<" ";
    }

    std::cout<<endl;

    bubble(iarray,7);
    bubble(darray,5);

    for(int i=0;i<7;i++){
        std::cout<<iarray[i]<<" ";
    }

    return 0;
}
