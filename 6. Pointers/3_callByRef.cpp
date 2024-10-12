#include<iostream>
using namespace std;
// call by refernce as a pointer:

void swapNumber(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int main(){

    int x=10;
    int y=20;

    int *p1= &x;
    int *p2= &y;

    swapNumber(p1, p2);

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y;

    return 0;
}