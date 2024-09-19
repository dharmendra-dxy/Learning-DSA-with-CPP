#include<iostream>
#include<vector>
using namespace std;
// Pattern: Two Pointer
// Sort an array consisting of 0's and 1's.

// APPROACH 1: count no. of 0 & 1, and malipulate array then.
// APPROACH 2: Two pointer

// function: sortArray
void sortArray(vector<int> &v){

    int start =0;
    int end = v.size() -1;

    while(start< end){
        if(v[start] > v[end]) swap(v[start++], v[end--]);
        
        if(v[start]==0) start++;
        if(v[end]==1) end--;

    } 
}



int main(){


    vector<int> v;

    cout<<"n: ";
    int n;
    cin>>n; 

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortArray(v);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }


    return 0; 
}