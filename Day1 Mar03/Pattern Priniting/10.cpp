#include<iostream>
using namespace std;

void pattern (int n ){ 
for(int i = 0 ; i < n ;i++){
   for (int j = 0 ; j < i+1 ; j++){
    cout<<"*";
   }
   cout<<endl;
}
for (int i = 0 ; i < n  ;i++){
    for (int j = 0 ; j < n-1-i ;j++){
        cout<<"*";
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