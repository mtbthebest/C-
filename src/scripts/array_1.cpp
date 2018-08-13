//
// Created by mtb on 18/08/13.
//
#include "iostream"
using namespace std;

int main(int argc, char *argv[]) {
    int x[100];

    for(int i=0;i<100;i++){
        x[i] = i;
        std::cout<<x[i]<<endl;
    }

    return 0;
}

