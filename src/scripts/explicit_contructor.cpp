//
// Created by mtb on 18/08/19.
//

#include <iostream>
using namespace std;

class myclass {
    int a;
public:
//    myclass(int x) { a = x; }
    explicit myclass(int x) { a = x; }
    int geta() { return a; }
};

int main()
{
//    myclass ob = 4; // automatically converted into myclass(4)
    myclass ob(4); //call explicit
    cout << ob.geta();
    return 0;
}