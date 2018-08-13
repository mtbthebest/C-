//
// Created by mtb on 18/08/13.
//

#include <iostream>
#include "stdio.h"

using namespace std;

void test1(){
#define MAX 20
#define MIN MAX/2
#define ABS(a) (a)<0 ? -(a) : (a)
    std::cout << MAX<<endl;
    std::cout << MIN<<endl;
    std::cout <<ABS(-5);
//    printf("%d",ABS(-10));


}

int main(int argc, char const *argv[]) {
    test1();

    return 0;
}


