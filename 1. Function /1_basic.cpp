#include<iostream>
using namespace std;

// function prototype:
int addition(int ,int);
void welcome(string);

int main(){

    // function syntax: data_Type function_Name(...parameters){...code...} ;

    cout<<addition(10,5)<<endl;
    welcome("Dharmendra");

    return 0;
}


// function definition:
int addition(int x, int y){
    return x+y;
}
void welcome(string name){
    cout<<"Hello "<<name<<" you are welcome!! ";
}
