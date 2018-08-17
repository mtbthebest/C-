//
// Created by mtb on 18/08/18.
//

#include <iostream>

using namespace std;

class loc {
private:
    /*Private members*/
    int longitude, latitude;

public:
    /*Public members*/
    loc() {};
    loc(int lg, int lt){
        longitude = lg;
        latitude = lt;
    }

    void show(){
        std::cout<<"longitude : "<< longitude<<"\n";
        std::cout<<"latitude : "<< latitude<<"\n";
        std::cout<<"\n";
    }

    loc operator+(loc op2);
    loc operator+=(int x);
    friend loc operator-(loc op1, loc op2);
    friend loc operator++(loc &op);
    friend loc operator++(loc &op, int x);
    friend loc operator+(int x,loc &op);

    void *operator new(size_t size);
    void operator delete(void *p);
    void *operator new[](size_t size);
    void operator delete[](void *p);

    loc *operator->() {return this;}
    loc operator,(loc op2);

//    int operator[](int i) { return a[i]; }

    ~loc() {};

};
loc loc::operator+(loc op2) {
    loc temp;
    temp.latitude = this->latitude + op2.latitude;
    temp.longitude = this->longitude + op2.longitude;
    return temp;

}

loc loc::operator+=(int x) {
    this->longitude +=x;
    this->latitude+=x;
    return *this;

}

loc operator-(loc op1,loc op2)
{
    loc temp;
    temp.longitude = op1.longitude - op2.longitude;
    temp.latitude = op1.latitude - op2.latitude;
    return temp;
}

loc operator++(loc &op){
    op.latitude++;
    op.longitude++;
}

loc operator++(loc &op, int x){
    op.latitude++;
    op.longitude++;


}

loc operator+(int x, loc &op){
    op.latitude +=x;
    op.longitude +=x;
    return op;
}

void *loc::operator new(size_t size){
    void *p;

    p = malloc(size);

    if(!p){
        bad_alloc ba;
        throw ba;
    }
    return p;
}

void loc::operator delete(void *p){
    free(p);
}

void *loc::operator new[](size_t size)
{
    void *p;
    cout << "Using overload new[].\n";
    p = malloc(size);
    if(!p) {
        bad_alloc ba;
        throw ba;
    }
    return p;
}

void loc::operator delete[](void *p)
{
    cout << "Freeing array using overloaded delete[]\n";
    free(p);
}

loc loc::operator,(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude;
    temp.latitude = op2.latitude;
    cout << op2.longitude << " " << op2.latitude << "\n";
    return temp;
}

int main(int argc, char *argv[]) {
    loc ob1(10,20), ob2(10,30),ob3;

    ob1 = ob1 + ob2;

    ob1.show();

    ob1 +=4;
    ob1.show();

    ob1 = ob1 -ob2;
    ob1.show();

    ++ob1;
    ob1.show();

    ob3 = ob1++;

    ob3.show();
    ob1.show();

    ob2 = 100 + ob2;
    ob2.show();


    loc *p1,*p2;
    try {
        p1 = new loc(10,20);
    }
    catch(bad_alloc){
        return  1;
    }

    p1->show();

    try {
        p2 = new loc [10]; // allocate an array
    } catch (bad_alloc xa) {
        cout << "Allocation error for p2.\n";
        return 1;;
    }

    for(int i=0; i<10; i++)
        p2[i].show();
    delete p1;
    delete [] p2;


    return 0;
}
