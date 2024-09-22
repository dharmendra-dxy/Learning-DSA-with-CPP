#include<iostream>
using namespace std;
// WAP for Matrix multiplication
int main(){

    int r1, c1, r2, c2;

    // input for array a:
    cout<<"r1, c1: ";
    cin>>r1>>c1;
    int a[r1][c1];
    
    cout<<"input for a: ";
    for(int i=0; i<r1;i++){
        for(int j=0; j<c1; j++){
            cin>>a[i][j];
        }
    }


    // input for array b:
    cout<<"r2, c2: ";
    cin>>r2>>c2;
    int b[r2][c2];

    cout<<"input for b: ";
    for(int i=0; i<r2;i++){
        for(int j=0; j<c2; j++){
            cin>>b[i][j];
        }
    }



    if(r2!=c1){
        cout<<"Array multiplication not possible";
    }
    else{
        // result array:
        int res[r1][c2];

        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){

                int value =0;
                for(int k=0; k<r2; k++){
                    value += a[i][k] * b[k][j]; 
                }
                res[i][j] = value;
            }
        }

        // array output:
        cout<<"required array: "<<endl;
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    

    return 0;
}