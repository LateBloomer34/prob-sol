//print all divisor


#include<iostream>
using namespace std;

int divisor(int num ){
   
    for(int i = 1 ; i*i<=num; i++){
        if (num%i==0){
            cout<<i<<endl;
        if(i!= num/i){
            cout<<num/i<<endl;
        }
        }
    }
    return 0;
}

int main (){
    int num = 36;
    divisor (num);
}