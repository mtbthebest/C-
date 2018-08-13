//
// Created by mtb on 18/08/13.
//

#include <iostream>

using namespace std;

void structure1(){
    struct person{
        char name[30];
        long int tel_num ;
        short int id;
    };

    struct person p;

    p.id = 0;

    std::cout <<p.id;


}
void structure2(){
    struct{
        char name[30];
        long int tel_num ;
        short int id;
    } x,y;


    x.id = 1;
    y= x;

    std::cout <<y.id;


}
void structure3(){
    struct person{
        char name;
        long int tel_num ;
        short int id;
    };

    struct person p[10];
    p[0].id = 1;
    p[1].name='djjjf';
    p[0]=p[1];

    std::cout <<p[1].id;
    std::cout <<p[1].name;
}
void structure4(){
    struct person{
        char name;
        long int tel_num ;
        short int id;
    }h;

    struct person *p;
    p=&h;
    p->id=1;
    std::cout<<h.id;
}
void enumerate(){
    enum color{
        red,
        black,
        white
    };

    enum color t;
    t=black;
    std::cout<<t;

    enum colors{
        yellow=100,
        brown=102,
        green
    };

    enum colors p;
    p=green;
    std::cout<<p;

}
void definition(){

    typedef  double real;
    real b =10.0;
    std::cout<<b<<endl;

    struct person{
        char name[30];
        long int tel_num ;
        short int id;
    };
    typedef struct person st;
    st p;
    p.id=0;
    std::cout<<p.id;



}

int main(int argc, char const *argv[]) {

    definition();

    return 0;
}
