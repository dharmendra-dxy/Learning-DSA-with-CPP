#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    // for loop:

    cout<<"Enter input for v: ";
    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"for loop V: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // for each loop:

    cout<<"for each loop V: ";
    for(int ele:v){
        cout<<ele<<" ";
    }


    return 0;
}