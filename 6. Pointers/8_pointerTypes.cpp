#include<iostream>
using namespace std;
int main(){

    // TYPES OF POINTER:
        // 1. Null pointer
        // 2. Wild pointer
        // 3. Danging  pointer
        // 4. Void  pointer
    

    // WILD POINTER:
    // It is a pointer type where, user declares the pointer but never initialise it.
    int *ptr_wild;
    cout<<"ptr_wild: "<<ptr_wild<<endl;
    cout<<"*ptr_wild: "<<*ptr_wild<<endl;


    // NULL POINTER:
    // It is a pointer variable, which is just declared but will only get address later to store.
    int *ptr_null = NULL;
    int *ptr_null_0 = 0;
    cout<<"ptr_null: "<<ptr_null<<endl;
    cout<<"ptr_null_0: "<<ptr_null_0<<endl;


    // DANGLING POINTER:
    // It is a type of pointer that points to a memory location that is not valid.
    int *ptr_dangling = NULL;
    {
        int x=10;
        ptr_dangling = &x;
    }
    cout<<"ptr_dangling: "<<ptr_dangling<<endl;
    // ptr_dangling -> it points to a empty location in memory.


    // VOID POINTER:
    // It is a pointer that can store address of any dataType variable.
    // But it can not be de-refrenced, but can be type cased.
    float f = 9.12;
    int num = 10;

    void *ptr_void = &f;
    ptr_void = &num;
    // cout<<"ptr_void: "<<*ptr_void<<endl; => gives error on de-refrencing

    // type cast:
    int *ptr_void_typecased= (int *)ptr_void;
    cout<<"ptr_void_typecased: "<<ptr_void_typecased<<endl;
    cout<<"*ptr_void_typecased: "<<*ptr_void_typecased<<endl;

    return 0;
}