#include <iostream>
#include <cmath>
double power(float);
using namespace std;
int main(int argc, char const *argv[])
{
    float x = 2.0, a;
    a = power(x);
    std::cout << "Value of a: " << a;

    return 0;
}

double power(float x)
{
    return pow(x, 2);
}
