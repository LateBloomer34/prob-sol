#include<iostream>
using namespace std;

void print (int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i+1 ; j++){
            cout<<char('A')+i;
        }
        cout<<endl;
    }
}

int  main (){
    int n = 5;
    print (n);
}

