#include<iostream>
#include<vector>
using namespace std;
// Given an array, move all the even integers at begining of array followed by odd integers.

// function: 
void sortByParity(vector<int> &v){
    int start=0;
    int end=v.size() -1;

// 4 2 3 1 5
// start = 2
// end = 1

    while(start<end){
        if(v[start]%2==1 && v[end]%2==0) swap(v[start++], v[end--]);

        if(v[start]%2==0) start++;
        if(v[end]%2==1) end--;

    }
}

int main(){

    vector<int> v = {1,2,3,4,5,6,7,8};

    sortByParity(v);

    cout<<"Required vector: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}