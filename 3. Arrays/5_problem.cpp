#include<iostream>
#include<vector>
using namespace std;
int main(){
    // PATTERN: Target Sum
    // Find no. of pairs in array whose sum is equal to x

    vector<int> v(5);

    cout<<"Enter V: ";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int pair=0;

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i] + v[j] == x){
                pair++;
                cout<<v[i]<<" "<<v[j]<<endl;
            }
        }
    }

    cout<<pair;

    return 0;
}