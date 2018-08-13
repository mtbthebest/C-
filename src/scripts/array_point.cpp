//
// Created by mtb on 18/08/13.
//

#include "iostream"
using namespace std;

int *pointer1(int array[], int size=10){
    int *pointer;
    pointer = array;
    for (int i=0; i<=size;i++){
        *pointer = i;
        pointer++;
    }
    return array;
}

void pointer3(int row_dim=3,int *p=NULL){
    int t =0;
    for (int i=0; i<row_dim;i++) {
        std::cout << *(p+i) << endl;
    }
}

void pointer2(int j,int row_dim, int *p){
    int t =0;
    p = p+(j*row_dim);
    for (int i=0; i<row_dim;i++) {
            std::cout << *(p+i) << endl;
    }
}
void pointer4(int row,int row_dim, int *p){
    for (int i=0; i<row_dim*row;i++) {
        std::cout<<*(p+i)<<endl;
    }

}

int main(int argc, char *argv[]) {
//    int *p, a[10];
//    p= a;
//    int *test ;
//    test = pointer1(a,10);
//
//
//    for (int i=0; i<=10;i++){
//        std::cout<<test[i]<<endl;
//
//    }
//    for (int i=0; i<=10;i++){
//        std::cout<<a[i]<<endl;
//        std::cout<<*(p+i) <<endl;
//        std::cout<<p[i] <<endl;
//
//    }
//
//
//    int a[5]={3,5,6,7,8};
//    pointer3(5,(int *)a);

    int a[3][2]={{0,1},{3,4},{5,6}};
//    pointer2(2,2,(int *)a);
    pointer4(3,2,(int *)a);




//    int num[3][3],*p2;
//    for (int i=0; i<3;i++){
//        for (int j=0; j<3;j++){
//            num[i][j]=i+j;
//        }
//    }
//
//    for (int i=0; i<3;i++){
//        for (int j=0; j<3;j++){
//            std::cout << num[i][j]<<endl;
//        }
//    }
//    p2 = num[0];
//    for (int i = 0; i < 3; ++i) {
//        for (int j=0; j<3;j++) {
//            std::cout << *(p2+i+j)<<endl;
//        }
//
//    }

//
//    std::cout<<"Function"<<endl;
//    pointer2(0,3,(int *)num);








    return 0;
}


