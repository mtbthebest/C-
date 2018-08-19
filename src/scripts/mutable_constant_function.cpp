//
// Created by mtb on 18/08/19.
//


#include <iostream>
using namespace std;
class Demo {
    mutable int i;
    int j;
public:
    int geti() const {
        return i; // ok
    }
    void seti(int x) const {
        i = x; // now, OK. becuase mutable
    }
    /* The following function won't compile.
void setj(int x) const {
j = x; // Still Wrong!
}
*/
};


int main()
{
    Demo ob;
    ob.seti(1900);
    cout << ob.geti();
    return 0;
}