#include<iostream>
#include<vector>
using namespace std;
// Given an array of non-decreasing order, return an array of squared of each array in sorted way.

void squaredArray(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        v[i] = v[i] * v[i]; 
    }
}

void sortedArray(vector<int> &v){
    
    int start=0;
    int end=v.size()-1;

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]>v[j]) swap(v[i], v[j]);
        }
    }
}

int main(){

    vector<int> v = {-2,-1,0,1,4,7,9};

    //make square:
    squaredArray(v);

    // make sorted:
    sortedArray(v);

    cout<<"Array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}