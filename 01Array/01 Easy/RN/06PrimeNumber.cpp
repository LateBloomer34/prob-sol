#include<iostream>
using namespace std;

bool isPrime(int num){
    if (num<=1){
        return false;
    }
    for (int i = 2 ; i*i <= num ;i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int prime(int arr[] , int n){
    for (int i = 0 ; i < n ;i++){
        int num = arr[i];
        if (isPrime(num)){
            cout<<num<<" is prime"<<endl;
        }
        else{
            cout<<num<<" is not prime"<<endl;
        }
    }
    return 0;
}

int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof arr/ sizeof arr[0];
     prime(arr , n);
   
}