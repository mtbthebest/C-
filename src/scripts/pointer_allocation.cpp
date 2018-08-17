//
// Created by mtb on 18/08/18.
//

#include <iostream>

using namespace std;


void allocae_int(){
        int *p;
        try {
            p = new int;
        }catch (bad_alloc xa){
            std::cout<<"Allocation failure\n";

        }
        *p = 100;

        cout << "At " << p << " ";
        cout << "is the value " << *p << "\n";

        delete p;

};

void allocate_array(){
    int *p,i;
    try {
        p = new int [10];
    }catch (bad_alloc xa){
        std::cout<<"Allocation failure\n";
    }

    for(i=0; i<10; i++ )
        p[i] = i;

    for(i=0; i<10; i++ ) {
        cout << p[i] << endl;
        cout << *(p+i)<< "\n";
    }
//

    delete [] p;
}

int main(int argc, char const *argv[]) {
    allocate_array();



    return 0;
}


