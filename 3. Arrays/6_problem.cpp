#include<iostream>
#include<vector>
using namespace std;
int main(){

    // PATTERN: Target sum
    // Count no of triplet in aaray whose sum is equal to x

    vector<int> v(6);

    int size = v.size();

    cout<<"Enter v: ";
    for(int i=0; i<size; i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int triplet = 0;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(v[i]+v[j]+v[k] == x){
                    triplet++;
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                }
            }
        }
    }

    cout<<triplet;

    return 0;
}