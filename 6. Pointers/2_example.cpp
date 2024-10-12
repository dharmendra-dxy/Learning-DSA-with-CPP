#include<iostream>
using namespace std;
int main(){
    // sum of two integers using pointer:

    int x,y;
    cin>>x>>y;

    int *ptrx= &x;
    int *ptry= &y;

    int result;

    int *ptr_result = &result;
    *ptr_result = *ptrx + *ptry;

    cout<<"Result: "<<result<<endl;
    cout<<"*ptr_result: "<<*ptr_result;

    return 0;
}