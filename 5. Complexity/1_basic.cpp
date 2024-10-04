#include<iostream>
using namespace std;
int main(){

    // TIME COMPLEXITY:
    // 1. worst case -> Big O
    // 2. Best case -> Big Omega 
    // 3. Average case -> Big theta  
    

    // find time compexity for traversing an array of length n:

    int n=6;
    int arr[] = {1,2,3,4,5,6};

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    // total of 3 instruction executing n times -> 3n -> worstcase(n)

    return 0;
}
