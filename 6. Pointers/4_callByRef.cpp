#include<iostream>
using namespace std;
// compute last and first occurance of a in str-> "aaacad"
void firstAndLastIndex(string s, char ch, int *first, int *last){
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }

    for(int i=s.size()-1; i>=0; i--){
        if(s[i]==ch){
            *last = i;
            break;
        }
    }
}

int main(){

    string s = "aaacab";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    firstAndLastIndex(s, ch, pf, pl);

    cout<<"*pf: "<<*pf<<endl;
    cout<<"*pl: "<<*pl<<endl;

    cout<<"First Index: "<<first<<endl;
    cout<<"Last Index: "<<last<<endl;

    return 0;
}
