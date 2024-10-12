#include<iostream>
using namespace std;
int main(){

    // Arrays as POINTER:

    int arr[] = {1,2,3};

    int *ptr = &arr[0];

    cout<<"ptr: "<<ptr<<endl;
    cout<<"arr: "<<arr<<endl;

    // => "arr" is actually a pointer with address of base element.

    // de-refrencing arr:
    cout<<"*arr: "<<*arr<<endl;  
    cout<<*(arr+0)<<" "<<*(arr+1)<<" "<<*(arr+2)<<endl;

    return 0;
}
