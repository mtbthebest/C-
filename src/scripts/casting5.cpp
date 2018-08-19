//
// Created by mtb on 18/08/19.
//

#include <iostream>

using namespace std;

void sqrval(const int *val){
    int *p;
    p = const_cast<int *> (val);

    *p = *val * *val;
}

void sqrval(const int &val){
    const_cast<int &>(val)=val*val;
}

int main(int argc, char const *argv[]) {
    int x(10);
    std::cout<<"x value before casting: "<<x<<endl;

//    sqrval(&x);
    sqrval(x);

    std::cout<<"x value after casting: "<<x<<endl;


    return 0;
}

