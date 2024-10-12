#include<iostream>
using namespace std;
int main(){
    // POINTER ARITHMETIC:

    int x=20;
    int *ptr= &x;

    cout<<"ptr: "<<ptr<<endl;
    cout<<"ptr+1: "<<(ptr+1)<<endl;

    // (ptr+1) means ==> ptr + 1*(sizeof (int dataType)) => ptr+ 1*(4) => ptr+4

    double y= 7.2;
    double *ptrd = &y;

    cout<<"ptrd: "<<ptrd<<endl;
    cout<<"ptrd+1: "<<(ptrd+1)<<endl;
    


    return 0;
}