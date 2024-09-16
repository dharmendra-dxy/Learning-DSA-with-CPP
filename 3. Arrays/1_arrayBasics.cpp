#include<iostream>
using namespace std;
int main(){

    // Array: It is a DataStructure which stores a collection of homogeneous items in a contiguous way.

    // syntax: data_Type variable_Name[size];

    int arr[] = {1,2,3,4,5};

    // Array follows 0-based indexing:
    cout<<"arr[0]: "<<arr[0]<<endl;
    cout<<"arr[1]: "<<arr[1]<<endl;

    // size of array:
    int size = sizeof(arr);
    cout<<"Size: "<<size;
    cout<<endl;

    // length of array:
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length: "<<length;
    cout<<endl;

    // Traversing Array for loop:
    cout<<"For loop: ";
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Traversing Array for each loop:
    cout<<"For each loop: ";
    for(int ele:arr){
        cout<<ele<<" ";
    }

    return 0;
}