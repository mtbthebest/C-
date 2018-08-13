//
// Created by mtb on 18/08/13.
//
#include "iostream"
using namespace std;

int series(void){
    static int series_num = 100;
    series_num +=1;
    return series_num;
}

int main(){
    int x=10;
    int y;
    int a ;
    y=x>9? 100:200;

    std::cout <<"x: "<<x<<endl;
    std::cout <<"y: "<<y<<endl;

    a = series();
    std::cout << a<<endl;
    a = series();
    std::cout << a<<endl;



}

