#include<iostream>
#include<vector>
using namespace std;
// Given a square matrix, rotate it by 90deg in clockwise direction without using any extra space.
// 1 2 3           7 4 1 
// 4 5 6   --->    8 5 2 
// 7 8 9           9 6 3

void rotateVector(vector<vector<int>> &v){

    int n= v.size();

    // transpose:
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(v[i][j], v[j][i]);
        }
    }

    // reverse every row:
    for(int i=0; i<n;i++){
        
    }
}

 
int main(){

    vector<vector<int>> v = { {1,2,3}, {4,5,6,}, {7,8,9} };

    cout<<"V: "<<endl;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    rotateVector(v);

    cout<<"V rotated: "<<endl;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}