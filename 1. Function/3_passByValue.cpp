#include<iostream>
using namespace std;
// pass by value: Here the copy of a varibale is passed.  


void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){

    int a =5, b=10;
    cout<<"Before swap: a= "<<a<<", b= "<<b<<endl;

    swap(a,b);
    cout<<"After swap: a= "<<a<<", b= "<<b;

    return 0;
}