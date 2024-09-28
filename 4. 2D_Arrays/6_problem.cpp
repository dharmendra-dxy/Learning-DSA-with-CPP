#include<iostream>
#include<vector>
using namespace std;
// Given a 2d array, where each row is sorted. Find row with maximum number of 1's.

// Input=> row =3, col=4
// matrix[] = { {0,1,1,1}, {0,0,0,1}, {0,0,0,1} }
// Output=> 0


// APPROACH 1(mine): count 1's in each rows and store it in a new array. Now in new array find max ele and return its index.
int rowWithMax1(vector<vector<int>> matrix){

    vector<int> countArr;
    int count =0;

    int row = matrix.size();
    int col = matrix[0].size();
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            if(matrix[i][j] == 1){
                count++;
            }
        }
        countArr.push_back(count);
        count=0;
    }

    int max = countArr[0];
    int maxIdx = 0;

    for(int i=0; i<countArr.size(); i++){
        if(countArr[i]> max){
            max = countArr[i];
            maxIdx = i;
        }
    }

    return maxIdx;
}


// APPROACH 2: numberOfOnes = column - firstOccuranceOf1inRow ;
int maximumOneRow(vector<vector<int>> matrix){

    int row = matrix.size();
    int col = matrix[0].size();

    int maxOne= 0;
    int maxOneRow= -1;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            if(matrix[i][j]==1){
                int numberOfOnes = col - j;

                if(numberOfOnes > maxOne){
                    maxOne = numberOfOnes;
                    maxOneRow = i;
                }
                break;
            }
        }
    } 
    return maxOneRow;   

}


// APPROACH 3: find for leftmostOne;


int main(){

    int row = 3, col=4;
    vector<vector<int>> matrix = { {0,1,1,1}, {0,0,1,1}, {0,0,0,1} };


    int ans = maximumOneRow(matrix);
    cout<<ans;

    

    return 0;
}