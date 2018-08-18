//
// Created by mtb on 18/08/19.
//


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    std::cout<<"Start \n";
    try{
        std::cout<<"Inside try block \n";
        throw 100;
//        throw 100.0;
        std::cout<<"THis will not execure \n";
    }catch (int i){
       std::cout<<"Caught an exception -- value is:  "<<i<<endl;
    }
    std::cout<<"End \n";
    return 0;
}

