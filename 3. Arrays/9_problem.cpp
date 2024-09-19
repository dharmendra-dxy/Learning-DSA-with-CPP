#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Rotate Array by "k" step, where k is non negative and can be greater than size of array

    cout<<"Enter size: ";
    int n;
    cin>>n;

    cout<<"Enter K: ";
    int k;
    cin>>k;
    if(k>n) k = k%n;

    vector<int> v(n);
    vector<int> v2(n);


    cout<<"Enter v: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;


    // logic for rotation:
    int j=0;
    for(int i=n-k; i<n; i++){
        v2[j++] = v[i];
    }

    for(int i=0; i<n-k; i++){
        v2[j++] = v[i];
    }

    cout<<"New R Array: ";
    for(int i=0; i<n; i++){
        cout<<v2[i]<< " ";
    }

    return 0;
}