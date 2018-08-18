//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <cstring>

using namespace std;

class Myexception {
public:
    /*Public members*/
    char str_what[80];
    int what;

    Myexception() {
        *str_what = 0;
        what = 0;
    };

    Myexception(char *s, int e) {
        strcpy(str_what,s);
        what = e;
    };


};


int main(int argc, char *argv[]) {
    int i;
    try {
        std::cout<<"Enter a positive number: ";
        std::cin>>i;
        if(i<0)
            throw Myexception("Not positive", i);
    }catch(Myexception e){
        std::cout<<e.str_what<<": "<<endl;
        std::cout<<e.what<<endl;
    }
    catch (...){
        std::cout<<"Caught everything ";
    }


    return 0;
}
