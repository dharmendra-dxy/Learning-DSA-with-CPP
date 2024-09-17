#include<iostream>
#include<vector>
using namespace std;
int main(){

    // PATTERN: Array manipulation
    // Find uniques ele in an array where all ele are repeated twice except one being unique.

    vector<int> v(5);
    int size = v.size();

    cout<<"Enter v: ";
    for(int i=0; i<size; i++){
        cin>>v[i];
    }

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(v[i]==v[j]){
                v[i] =-1;
                v[j] =-1;
            }
        }
    }


    bool unique = false;
    int idx;

    for(int i=0; i<size; i++){
        if(v[i]!=-1){
            unique = true;
            idx = i;
        }
    }

    cout<<"Unique: "<<unique<<endl;
    cout<<"index: "<<idx;

    return 0;
}