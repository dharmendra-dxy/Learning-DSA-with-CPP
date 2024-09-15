#include<iostream>
using namespace std;
 /* Print following pattern: r=3, c=6
    ******
    ******
    ******
 */

int main(){

    int r,c;
    cout<<"Enter row and column: ";
    cin>>r>>c;
    
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    return 0;
}