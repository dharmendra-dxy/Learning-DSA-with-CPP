#include<iostream>
using namespace std;
// WAP for Matrix Transpose
int main(){

    int r,c;
    cout<<"r, c: ";
    cin>>r>>c;

    int array[r][c];

    cout<<"Array input: ";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>array[i][j];
        }
    }

    cout<<"Array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    // transpose logic:
    cout<<"Transpose Array: "<<endl;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}