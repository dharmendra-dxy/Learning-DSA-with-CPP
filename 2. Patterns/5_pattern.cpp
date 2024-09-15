#include<iostream>
using namespace std;
/* Rectangular Pattern:
    1234567
    2345671
    3456712
    4567123
    5671234
    6712345
    7123456
*/ 
int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        for(int j=i; j<=n; j++){
            cout<<j<<" ";
        }

        for(int k=1; k<i; k++){
            cout<<k<<" ";
        }
        cout<<endl;

    }

    return 0;
}