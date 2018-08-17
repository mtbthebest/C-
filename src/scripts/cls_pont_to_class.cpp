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
    cl(int i) { val = i;};
    int val;
    int double_val(){ return val *2;};

    ~cl() {};

};

int main(int argc, char *argv[]) {
    int cl::*data;
    int (cl::*func)();

    cl ob1(1), ob2(2);

    data = &cl::val;
    func = &cl::double_val;
    std::cout<<ob1.*data<<endl;
    std::cout<<(ob1.*func)()<<endl;
    std::cout<<(ob2.*func)()<<endl;



    return 0;
}