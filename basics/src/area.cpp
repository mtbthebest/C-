#include <iostream>
using namespace std;
const double pi = 3.141593;
int main(int argc, char const *argv[])
{
    double area, circuit, radius =1.5;
    area = pi * radius * radius;
    circuit = 2*pi*radius;
    
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circuit << endl;
    cout << "Area: " << area << endl;

    return 0;
}
