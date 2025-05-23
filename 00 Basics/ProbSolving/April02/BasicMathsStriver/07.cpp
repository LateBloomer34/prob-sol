// check for prime


#include<iostream>
using namespace std;

bool prime (int num ){
    if (num <=1){
        return true;
    }
    else{
        for(int i = 2 ; i*i<=num ;i++){
            if (num%i==0){
                return true;
            }
        }
    }
    return false;
}

int main (){
    int num = 37;
    if (prime(num)){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    
    
    
}