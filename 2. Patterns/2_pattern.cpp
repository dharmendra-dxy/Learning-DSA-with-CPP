#include<iostream>
using namespace std;
 /* Print following pattern: 
    * * * * * *
    *         *
    *         *
    * * * * * *
    
 */
int main(){

    int n,m;
    cout<<"Enter rows and columns: ";
    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(j==1 || j==m || i==1 || i==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}