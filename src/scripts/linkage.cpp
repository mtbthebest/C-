//
// Created by mtb on 18/08/19.
//

#include <iostream>
using namespace std;

extern "C" void myCfunc();
int main()
{
    myCfunc();
    return 0;
}
// This will link as a C function.
void myCfunc()
{
    cout << "This links as a C function.\n";
}