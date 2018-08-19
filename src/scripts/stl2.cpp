//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <list>

using namespace std;


int main(int argc, char *argv[]) {

    list<int> list1, list2;
    list<int>::iterator p;
    int i;

    for(i=0;i<10;i+=2)list1.push_back(i);
    for(i=0;i<10;i+=2)list2.push_back(i+1);
    std::cout<<"list1: ";
    p=list1.begin();
    while(p!=list1.end()) {
        std::cout << " " << *p;
        p++;
    }
    std::cout<<"\n ";
    std::cout<<"list2: ";
    p=list2.begin();
    while(p!=list2.end()) {
        std::cout << " " << *p;
        p++;
    }

    list1.merge(list2);

    std::cout<<"\n ";
    std::cout<<"list1: ";
    p=list1.begin();
    while(p!=list1.end()) {
        std::cout << " " << *p;
        p++;
    }

    std::cout<<"\n ";
    std::cout<<"list2: ";
    p=list2.begin();
    while(p!=list2.end()) {
        std::cout << " " << *p;
        p++;
    }


    return 0;
}