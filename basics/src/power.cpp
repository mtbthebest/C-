#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    double x = 2.5, y; 
    cout << x << endl;
    y = pow(x,2);
    cout << y << endl;
    string prompt = "What is your name?", name,line(5,'-'),total = "Hello";
    cout << prompt;
    getline(cin,name);
    cout << name;
    cout <<line;

    return 0 ;
}