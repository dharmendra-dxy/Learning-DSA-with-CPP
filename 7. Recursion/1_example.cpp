#include<iostream>
using namespace std;
// example: factorial

int factorial(int n){
    // base case:
    if(n==1) return 1;

    return n * factorial(n-1);
    
}

int main(){

    int n=5;
    int result = factorial(n);

    cout<<result;
    return 0;
}
