#include<iostream>
using namespace std;
int main(){

    // time complexity for nested loop:
    int n=5;

    // example:
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // j loop will execute about n times
    // i loop will execute about n times
    // => total of n^2 times execution => worstcase(n^2)  

    // example:
    for(int i=1; i<n; i++){
        for(int j=1; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // i => 0, 1, 2, 3.....n 
    // j => 0, 1, 2, 3.....n  instructions
    // => total of n(n-1)/2 instructions will execute => worstcase(n^2)


    return 0;
}
