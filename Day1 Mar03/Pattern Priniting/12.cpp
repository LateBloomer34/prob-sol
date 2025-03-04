#include<iostream>
using namespace std;

void pattern (int n ){ 
for (int i = 0 ; i < n ;i++){
for (int j = 0 ; j < i+1 ; j++){
    cout<<j+01;
}
for(int j =  0 ; j<2*n - 2 -2*i ; j++){
    cout<<"*";
}
for (int j = i ; j >=0 ; j--){
    cout<<j+01;
}
cout<<endl;
}
}

int main(){
    int n;
    cout<<"enter the value of n :- ";
    cin >>n ;
    pattern (n);
}