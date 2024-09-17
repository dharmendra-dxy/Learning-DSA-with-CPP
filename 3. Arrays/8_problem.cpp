#include<iostream>
#include<vector>
using namespace std;
// Find second largest element in array:

// function: findLargestEle
// int findLargestEle(vector<int> v){
//     int size= v.size();
//     int max=v[0];
//     int maxPos;

//     for(int i=0; i<size; i++){
//         if(v[i]>max){
//             max=v[i];
//             maxPos=i;
//         }
//     }
//     return maxPos;
// }

// alternate method: function -> findSecondLagestEle:
int findSecondLagestEle(vector<int> v){
    int size = v.size();
    int maxEle=0;
    int secondMaxEle=0;

    for(int i=0; i<size; i++){
        if(v[i]>maxEle) maxEle = v[i];
    }

    for(int i=0; i<size; i++){
        if(v[i]>secondMaxEle && v[i]!=maxEle) secondMaxEle = v[i];
    }

    return secondMaxEle;
}


int main(){

    vector<int> v(7);
    int size =v.size(); 

    cout<<"Enter v: ";
    for(int i=0; i<size; i++){
        cin>>v[i];
    }


    // Using METHOD 1:

    // int maxPos= findLargestEle(v);
    // int maxEle= v[maxPos];

    // for not unique max element:
    // for(int i=0; i<size; i++){
    //     if(v[i] == maxEle){
    //         v[i]=-1;
    //     }
    // }

    // int secondMaxPos = findLargestEle(v);
    // cout<<"Second max idx: "<<secondMaxPos<<endl;
    // cout<<"Second max ele: "<<v[secondMaxPos]<<endl;


    // Using METHOD 2:

    cout<<"Second Largest Ele: "<<findSecondLagestEle(v)<<endl;

    return 0;
}