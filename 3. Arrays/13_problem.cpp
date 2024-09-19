#include<iostream>
#include<vector>
using namespace std;
// PATTERN: Prefix sum
// Return a prefix/running sum for the array without creating a new array

void runningSum(vector<int> &v){

    for(int i=1; i<v.size();i++){
        // running sum logic:
        v[i] = v[i] + v[i-1];
    }

}


int main(){

    vector<int> v={1,2,3,4,5};

    runningSum(v);

    cout<<"Running sum array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}