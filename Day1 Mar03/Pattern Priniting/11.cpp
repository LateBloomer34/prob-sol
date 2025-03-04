#include<iostream>
using namespace std;

void pattern (int n ){ 
for(int i = 0 ; i < n ;i++){
   for (int j = 0 ; j <i+1 ;j++){
    if ((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){
        cout<<"1"<<" ";
    }
    else{
        cout<<"0"<<" ";
    }
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