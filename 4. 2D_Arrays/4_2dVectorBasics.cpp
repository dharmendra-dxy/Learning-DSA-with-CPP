#include<iostream>
#include<vector>
using namespace std;
int main(){

    // 2D vector is a vector of vector data type.

    // syntax: vector<vector<dataType>> vector_Name;
    vector<vector<int>> v1;


    // vector v of size: row, col:
    int row, col;
    vector<vector<int>> v2(row, vector<int>(col));



    return 0;
}