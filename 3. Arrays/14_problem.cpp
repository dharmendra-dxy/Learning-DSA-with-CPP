#include<iostream>
#include<vector>
using namespace std;
// Check if we can partition the array into subarray with equal sum.
// More formally, check that the prefix sum of a part of a array is equal to the suffix sum of rest of array
// prefix sum(i): sum(a0 -> ai)
// suffix sum(i+1): sum(ai+1 -> an-1)

// USE: prefixSum + suffixSum = totalSum

bool checkPrefixSuffixSum(vector<int> &v){

    int totalSum = 0;
    int prefixSum=0;

    for(int i=0; i<v.size(); i++){
        totalSum += v[i];
    }

    for(int i=0; i<v.size(); i++){
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;

        if(prefixSum == suffixSum){
            cout<<"Idx: "<<i<<endl;
            return true;
        }
    }
    return false;
}

int main(){

    cout<<"n: ";
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<checkPrefixSuffixSum(v);



    return 0;
}