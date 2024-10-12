#include<iostream>
using namespace std;
int main(){

    // post-pre arithmetic pointer:
    

    int arr[2] = {1,2};

    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<ptr+1<<" "<<*(ptr+1)<<endl;

    // pre-post arithmetic pointer:


    return 0;
}