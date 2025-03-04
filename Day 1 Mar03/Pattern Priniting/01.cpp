#include<iostream>
using namespace std;

int pattern1 (int n ){

    for (int i = 0 ; i < n ;i++){
        for (int j = 0; j < n ;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

int main(){
    int n;
    cout<<"enter the value of n :- ";
    cin >>n ;
    
    pattern1 (n);
    
}