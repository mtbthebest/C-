#include "account.h"
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    // Account current1, current2;
    // current1.init("Cheers, Mary", 1234567, -1200.99);
    Account giro("Cheers, Mary", 1234567, -1200.99),
            save("Lucky, Luke");
    giro.display();
    return 0;
}
