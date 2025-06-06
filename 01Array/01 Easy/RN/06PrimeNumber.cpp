#include<iostream>
using namespace std;

bool isPrime(int num , int n){
    if (num<=1){
        return false;
    }
    else{
    for (int i = 2 ; i < n ;i++){
        if (num%i==0){
            return false;
        }
        return true;
    }
}
return 0;
}

int prime(int arr[] , int n){
    for (int i = 0 ; i < n ;i++){
        int num = arr[i];
        if (isPrime(num, n)){
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