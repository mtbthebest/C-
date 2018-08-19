//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <typeinfo>

using namespace std;



int main(int argc, char const *argv[]) {
//    int j;
//
//    char *p= reinterpret_cast<char *>(&j);
//    p[0]=1;
//    p[1]=2;
//    std::cout<< typeid(p).name()<<endl;
//    std::cout<<<<endl;



//    int *i;
//    char *p = "This is a string";
//
//
//    i = reinterpret_cast<int *> (p);
//
//    cout << i;



    int *p= new int(65);
    char *ch = reinterpret_cast<char *>(p);

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<ch<<endl;
    cout<<*ch<<endl;


    return 0;
}

