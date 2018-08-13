//
// Created by mtb on 18/08/14.
//


#include <iostream>

using namespace std;

class cl {
private:
    /*Private members*/
    int a,b;
    
public:
    /*Public members*/
    cl(int i, int j) {a=i;b=j;};
    cl(int i) {a=b=i;};
    int get_value(){
        return a;
    }
    ~cl() {};

};

int main(int argc, char *argv[]) {
    int s;
    cl ob1[3] ={cl(1),cl(2),cl(3)};
    cl ob2[3] ={1,2,3};
    s =ob1[2].get_value();
    std::cout<<s<<endl;

    cl ob3[3] ={cl(1,2),cl(4,3),cl(5,6)};
    s =ob3[2].get_value();

    std::cout<<s<<endl;

    cl ob4[]={};

    cl *ob5[3],ob6(10),*ob7;
    ob7 = ob1;
    ob5[0] = &ob3[0];


    s =ob5[0]->get_value();
    int t = ob7->get_value();
    std::cout<<s<<endl;
    std::cout<<t<<endl;


    return 0;
}