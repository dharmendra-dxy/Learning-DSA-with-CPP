#include<iostream>
using namespace std;
int main(){

    char array[5];

    cout<<"Enter vowels: ";

    // for loop:
    // for(int idx=0; idx<5; idx++){
    //     cin>> array[idx];
    // }

    // for each loop:
    for(char &ele:array){
        cin>>ele;
    }

    // print result:
    for(int idx=0; idx<5; idx++){
        cout<<array[idx]<<" ";
    }


    return 0;
}