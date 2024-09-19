#include<iostream>
#include<vector>
using namespace std;
// Given an array of size n, answer q queries where you need to print the sum of values in a given
// range of indices from l-to-r (both included)
// NOTE: The values of l & r in querie follows 1 based indexing

// eg: [a1, a2,a3,a4,a5,a6] : l=2, r=6 -> ans = (a2+a3+a4+a5+a6)

// sol: since, there can be a lot of queries for which make pre-calculation & then give result as per l,r
// reqAns = prefixSum(r) - prefixSum(l-1)

int main(){

    cout<<"n: ";
    int n;
    cin>>n;

    // for 1 based indexing: create a vector of size n+1 and initialize by 0;
    vector<int> v(n+1, 0);

    cout<<"v: ";
    for(int i=1; i<n; i++){
        cin>>v[i];
    }

    // calculate prefix sum array:
    for(int i=0; i<v.size(); i++){
        v[i] +=v[i-1];
    }

    cout<<"Q : ";
    int q;
    cin>>q;

    while(q--){
        cout<<"l,r: ";
        int l,r;
        cin>>l>>r;

        int ans =0;
        // ans = prefixSumArray[r] - prefixSumArray[l-1];
        ans = v[r] - v[l-1];
        cout<<"Ans: "<<ans<<endl;

    }

    return 0;
}