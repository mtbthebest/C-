//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <typeinfo>

using namespace std;

class Mammal {
public:
   virtual bool lay_eggs(){return false;};

};

class Cat: public Mammal {
public:
    //...
};

class Platypus: public Mammal {
public:
    bool lays_eggs() { return true; }
// ...
};

class Dog: public Mammal {
public:
// ...
};

Mammal *factory()
{
    switch(rand() % 3 ) {
        case 0: return new Dog;
        case 1: return new Cat;
        case 2: return new Platypus;
    }
    return 0;
}

void WhatMammal(Mammal &ob){
    std::cout<<"ob is referencing an object of type ";
    std::cout<< typeid(ob).name()<<endl;
}


int main(int argc, char *argv[]) {
    Mammal *p, AnyMammal;
    Cat cat;
    Platypus pl;

//    p=&AnyMammal;
//
//    std::cout<<"p is pointing to an object of type "<< typeid(*p).name()<<endl;
//
//    p =&pl;
//    std::cout<<"p is pointing to an object of type "<< typeid(*p).name()<<endl;
//    std::cout<<"p is pointing to an object of type "<< typeid(*p).name()<<endl;
    WhatMammal(AnyMammal);
    WhatMammal(cat);
    WhatMammal(pl);

    return 0;
}
