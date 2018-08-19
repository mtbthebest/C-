//
// Created by mtb on 18/08/19.
//

#include <iostream>
using namespace std;

class MyClass {
    const int numA; //
    const int numB; //
public:
// Initialize numA
    MyClass(int x, int y) : numA(x), numB(y) { }
    int getNumA() { return numA; }
    int getNumB() { return numB; }
};

int main()
{
    MyClass ob1(7, 9), ob2(5, 2);
    cout << "Values in ob1 are " << ob1.getNumB() <<
         " and " << ob1.getNumA() << endl;
    cout << "Values in ob2 are " << ob2.getNumB() <<
         " and " << ob2.getNumA() << endl;
    return 0;
}