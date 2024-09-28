#include<iostream>
#include<vector>
using namespace std;
// Print pascal triangle for n given rows:

vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>> pascal(n);

    for(int i=0; i<n; i++){
        pascal[i].resize(i+1);

        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }

    return pascal;
}

int main(){

    cout<<"n: ";
    int n;
    cin>>n;

    vector<vector<int>> ansV;

    ansV = pascalTriangle(n);

    
    // printPascal:
    for(int i=0; i<ansV.size(); i++){
        for(int j=0; j<ansV[i].size(); j++){
            cout<<ansV[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
    
}