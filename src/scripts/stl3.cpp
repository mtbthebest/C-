//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <map>

using namespace std;


int main(int argc, char *argv[]) {

    map<char,int> m;
    map<char,int>::iterator p;
    int i;

    for(i=0;i<26;i+=1)m.insert(pair<char,int>('A' +i,65+i));

    std::cout<<"m: ";
    p=m.begin();
    while(p!=m.end()) {
        std::cout << " " <<p->first;
        std::cout << " " <<p->second;
        std::cout<<"\n ";

        p++;
    }
//    std::cout<<"\n ";
//    std::cout<<"list2: ";
//    p=list2.begin();
//    while(p!=list2.end()) {
//        std::cout << " " << *p;
//        p++;
//    }
//
//
//
    return 0;
}