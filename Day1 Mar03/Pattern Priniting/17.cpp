#include<iostream>
using namespace std;

void pattern (int n ){ 
for (int i = 0; i < n ; i++){
   for(int j = 0 ; j < n-i-1 ; j++){
    cout<<" ";
   }
   for (int j = 0 ; j < i+1 ;j++){
    cout<<char('A'+j);
   }
   for (int j =i ; j > 0 ; j--){
    cout<<char('A'+j-1);
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