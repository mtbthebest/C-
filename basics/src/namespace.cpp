#include <iostream>
#include <string>
using namespace std;

namespace A
{
    string mess = "A";
    int count = 0;
    double f(double);
}
namespace A
{
    int g(void);
    double f(double y){
        return y/10.0;
    }
}

int A::g(void){
    return ++count;
}

namespace B{
    double f(){
        return 10.0;
    }

}

double f(void){
    return 5.0;
}

int main(int argc, char const *argv[])
{
    using B::f;
    std::cout << "Testing namespaces "<<endl;
    std::cout << A::mess<< endl;
    A::g();
    cout << A::g() << endl;
    cout << A::f(1.2) << endl;
    cout << f()<<endl;
    cout << ::f() << endl;
    return 0;
}

