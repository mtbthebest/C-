//
// Created by mtb on 18/08/19.
//

#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char *argv[]) {
//    vector<int> iv;
//    vector<char> cv(5);
//    vector<char> cv2(5,'v');
//    vector<int> iv2(iv);

//------------------------------------------------
//    vector<char>v(10);
//    unsigned int i;
//
//    std::cout<<" Size: "<<v.size()<<endl;
//    for(i=0;i<v.size();i++)v[i]= i+'a';
//    for(i=0;i<v.size();i++)std::cout<<" v: "<<v[i]<<endl;
//    v.push_back(v.size()+'a');
//    std::cout<<" Size: "<<v.size()<<endl;
//    for(i=0;i<v.size();i++)std::cout<<" "<<v[i];
//    std::cout<< "\n";


//------------------------------------------------
    vector<char>v(10);
    int i;
    vector<char>::iterator p;

    p = v.begin();
    i=0;

    while(p!=v.end()){
        *p=i+'a';
        p++;
        i++;
    }
    std::cout<<"v[i]: ";
    p = v.begin();
    while(p!=v.end()) {
        std::cout << " " << *p;
        p++;
    }

    std::cout<< "\n";

    p = v.begin();
    p +=2;
    v.insert(p,'k');
    v.push_back('l');


    std::cout<<"v[i]: ";
    p = v.begin();
    while(p!=v.end()) {
        std::cout << " " << *p;
        p++;
    }
    p=v.begin() +2;

    v.erase(p,p+3);
    std::cout<< "\n";
    std::cout<<"v[i]: ";
    p = v.begin();
    while(p!=v.end()) {
        std::cout << " " << *p;
        p++;
    }
    p =v.end();
    v.insert(p,'s');

    std::cout<< "\n";
    std::cout<<"v[i]: ";
    p = v.begin();
    while(p!=v.end()) {
        std::cout << " " << *p;
        p++;
    }



    vector<char> vc;
    p= vc.begin();

    vc.insert(p,v.begin(),v.end());
    std::cout<< "\n";
    std::cout<<"vc[i]: ";

    p = vc.begin();
    while(p!=vc.end()) {
        std::cout << " " << *p;
        p++;
    }

    p=vc.end();
    vc.insert(p,'p');
    std::cout<< "\n";
    std::cout<<"vc[i]: ";
    p = vc.begin();
    while(p!=vc.end()) {
        std::cout << " " << *p;
        p++;
    }

    std::cout<< "\n";
    std::cout<<"v[i]: ";
    p = v.begin();
    while(p!=v.end()) {
        std::cout << " " << *p;
        p++;
    }

    return 0;
}