#include<iostream>
using namespace std;
int main(){

    // syntax: dataType Array[row][col];
    // initialize an array => array[2][3] = {{1,2,3}, {4,5,6}};

    int row,col;
    cin>>row>>col;

    int array[row][col];


    // taking input in 2d array:
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>array[i][j];
        }
    }

    // printing 2d array:
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}