//
// Created by mtb on 18/08/18.
//
#include <iostream>

using namespace std;

const int SIZE = 10;


template <class StackType> class stack{
    StackType stck[SIZE];
    int tos;
public:
    stack(){tos=0;}
    void push(StackType ob);
    StackType pop();
};

template <class StackType> void stack<StackType>::push(StackType ob) {
    if(tos == SIZE){
        std::cout <<"Stack is full";
        return;
    }
    stck[tos] = ob;
    tos++;
}

template <class Stacktype> Stacktype stack<Stacktype>::pop() {
    if(tos==0) {
        cout << "Stack is empty.\n";
        return 0; // return null on empty stack
    }
    tos--;
    return stck[tos];

}


int main(int argc, char *argv[]) {
    stack<char>s1,s2;
    int i;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');

    std::cout<<s1.pop();
    stack<char *> chrptrQ;

    struct address{
        char name[40];
        char street[40];
    };

    stack<address> obj;

    return 0;
}
