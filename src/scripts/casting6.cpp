//
// Created by mtb on 18/08/19.
//

#include <iostream>

using namespace std;



int main(int argc, char const *argv[]) {
    int i;

    for (i=0;i<10;i++)
        std::cout<< static_cast<double>(i)/3<<endl;
//        std::cout<< double(i)/3.0<<endl;

    int b=i;
    std::cout<< b<<endl;




    return 0;
}

