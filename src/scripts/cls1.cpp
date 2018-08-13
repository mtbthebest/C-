//
// Created by mtb on 18/08/13.
//

#include <iostream>

using namespace std;
#define SIZE 100

class Stack{
private:
    int tos;
    int stck[SIZE];
    static int s;
public:
    int p=0;
    Stack(){tos=0, s=0;};
    void push(int i);
    int pop();
    ~Stack(){std::cout<<"Destroyed"<<endl;}
};

int Stack::s;

void Stack::push(int i) {
    if (tos == SIZE){
        return;
    }
    stck[tos] =i;
    tos++;
}

int Stack::pop(){
    if(tos==0){
        return 0;
    }
    tos --;
    return stck[tos];
}

Stack f();

int main(int argc, char const *argv[]) {
    Stack s1;
//    std::cout<<s1.p;
    s1.push(5);
    s1.push(6);
    s1.pop();
    std::cout<<s1.pop()<<endl;
    Stack funcs = f();
    std::cout<<funcs.pop()<<endl;
    return 0;
}

Stack f(){
    Stack s2;
    s2.push(2);
//    std::cout<<s2.pop()<<endl;
    return s2;

}