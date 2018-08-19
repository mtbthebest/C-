//
// Created by mtb on 18/08/19.
//
#include <iostream>

using namespace std;

namespace CounterNameSpace{
    int upperbound, lowerbound;
    
    class counter{
    private:
        int count;
    public:
        counter(int n){
            if(n<=upperbound) count =n;
            else count = upperbound;
        }
        void reset(int n){
            if (n<=upperbound) count =n;
        }
        int run(){
           if(count>lowerbound) return count --;
           else return lowerbound;
        }
    };
}

int main(int argc, char const *argv[]) {
//    CounterNameSpace::upperbound = 100;
//    CounterNameSpace::lowerbound = 0;
//    CounterNameSpace::counter ob1(10);
//
//    int i;
//
//    do{
//        i = ob1.run();
//        std::cout<<i<<endl;
//    }while (i>CounterNameSpace::lowerbound);
//-----------------------------------------
    using CounterNameSpace::upperbound;
    upperbound =50;

    using CounterNameSpace::counter;
    counter ob1(10);

    using namespace CounterNameSpace;
    counter ob2=10;
    lowerbound = 10;




    return 0;
}

