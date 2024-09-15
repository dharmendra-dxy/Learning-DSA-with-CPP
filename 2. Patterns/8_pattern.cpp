#include<iostream>
using namespace std;
/* Print pattern:
   1
  121
 12321
1234321
*/
int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        // for spaces:
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }

        // for ascending numbers:
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }

        // for decending numbers:
        for(int j=i-1; j>=1; j--){
            cout<<j<<" ";
        }

        cout<<endl;

    }

    return 0;
}