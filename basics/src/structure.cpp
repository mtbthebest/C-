#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Representative
{
    string name;
    double sales;

};

int main(int argc, char const *argv[])
{
    Representative rita, john;
    rita.name = "Strom, Rita";
    rita.sales = 37000.37;
    john.name = "Quick, John";
    john.sales = 23001.23;
    rita.sales += 1700.11;
    cout << rita.name;
    Representative *ptr = &john;
    // print(john);
}
