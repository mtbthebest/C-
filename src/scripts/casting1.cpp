//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <typeinfo>

using namespace std;

class cl1 {
    //...
};

class cl2:public cl1{
    //...
};

int main(int argc, char *argv[]) {
    int i,j;
    float f;
    char *p;
    cl1 ob1;
    cl2 ob2;

    std::cout<<"The type of i is: "<< typeid(i).name()<<endl;
    std::cout<<"The type of j is: "<< typeid(j).name()<<endl;
    std::cout<<"The type of f is: "<< typeid(f).name()<<endl;
    std::cout<<"The type of p is: "<< typeid(p).name()<<endl;
    std::cout<<"The type of ob1 is: "<< typeid(ob1).name()<<endl;
    std::cout<<"The type of ob2 is: "<< typeid(ob2).name()<<endl;


    return 0;
}
