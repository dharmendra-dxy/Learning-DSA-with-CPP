#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Vectors are dynamic array i.e it can be resized.

    // syntax: vector<data_Type> vector_Name;
    // syntax: vector<data_Type> vector_Name(size);

    vector<int> v(5);


    // some basic operations in vector:


    // (1) size of vector:
    int size = v.size();
    cout<<"Size: "<<size<<endl;

    // (2) resize a vector:
    v.resize(8);
    cout<<"New size: "<<v.size()<<endl;

    // (3) capacity: (NOTE: capacity >= size)
    cout<<"Capacity: "<<v.capacity()<<endl;

    // (4) AddElement: 

    // v.push_back(ele): insert ele at last postition
    // NOTE: it don't run when size of v is already defined.
    v.push_back(1);
    v.push_back(2);

    // v.insert(pos, ele): insert ele at specific postion relative to begining position

    // v.beg(): gives first element position
    // v.end(): gives last element position


    // (5) DeleteElement:

    // v.pop_back(): last element will be deleted
    // v.erase(pos): pos is relative to first position
    // v.clear(): to delete all element



    return 0;
}