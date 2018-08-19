//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <typeinfo>

using namespace std;

class Base {
public:
    virtual void f(){std::cout<<"Inside base \n";};

};

class Derived: public Base {
public:
    void f(){std::cout<<"Inside Derived \n";}
};


int main(int argc, char *argv[]) {

    Base *bp, b_ob;
    Derived *dp, d_ob;

    dp = dynamic_cast<Derived *>(&d_ob);

    if(dp){
            std::cout<<"Cast from Derived * to Derived * OK."<<endl;
            dp->f();
    }else{std::cout<<"Error"<<endl;}

    bp = dynamic_cast<Base *>(&b_ob);

    if(bp){
        std::cout<<"Cast from Base * to Base * OK."<<endl;
        bp->f();
    }else{std::cout<<"Error"<<endl;}

    bp = dynamic_cast<Base *>(&d_ob);

    if(bp){
        std::cout<<"Cast from Derived * to Base * OK."<<endl;
        bp->f();
    }else{std::cout<<"Error"<<endl;}


    bp = dynamic_cast<Base *>(&d_ob);

    if(bp){
        std::cout<<"Cast from Base * to Derived * OK."<<endl;
        bp->f();
    }else{std::cout<<"Error"<<endl;}

    dp = dynamic_cast<Derived *>(&b_ob);

    if(dp){
        std::cout<<"Cast from Derived * to Base * OK."<<endl;
        dp->f();
    }else{std::cout<<"Error"<<endl;}

    bp= &b_ob;
    dp = dynamic_cast<Derived *>(bp);
    if(dp){
        std::cout<<"Cast from Base * to Derived * OK. Because pointing to a derived object"<<endl;
        dp->f();
    }else{std::cout<<"Error"<<endl;}

    bp= &d_ob;
    dp = dynamic_cast<Derived *>(bp);
    if(dp){
        std::cout<<"Cast from Base * to Derived * OK. Because pointing to a derived object"<<endl;
        dp->f();
    }else{std::cout<<"Error"<<endl;}


    return 0;
}
