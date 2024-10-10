#include<iostream>
using namespace std;
int main(){

    // syntax for address of variable: &variable_name

    int x=10;
    cout<<"Address x: "<< &x <<endl;

    // we can store address of a variable in POINTER

    // POINTER is a special variable that can store address of a variable
    // syntax: data_Type *pointer_name

    int *ptr = &x;
    cout<<"prt x: "<<ptr<<endl;
    cout<<"*prt x: "<<*ptr<<endl; // accessing data through a pointer -> dereference operator


    // declaring a new pointer:
    int *ptr2;
    cout<<"ptr2 : "<<ptr2<<endl;

    // re-assign / update ptr2:
    int marks=90;
    ptr2= &marks;
    cout<<"ptr2 after re-assign: "<<ptr2<<endl;

    // updating marks:
    marks = 100;
    cout<<"*ptr2 after updation: "<<*ptr2<<endl;

    // updating marks with pointer:
    *ptr2 = 50;
    cout<<"marks after updation: "<<marks<<endl;
    cout<<"*ptr2 after updation: "<<*ptr2<<endl;


    return 0;
}
