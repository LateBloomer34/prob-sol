#include<iostream>
using namespace std;

int min (int arr[] , int n ){
    int smallest = arr[0];
    for (int i = 0 ; i <n  ; i++){
        if (arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"largest element of an array is :- "<<smallest;
    return 0;
}

int main (){
    int arr[] = {2,3,11,8,7,-2};
    int n = sizeof arr/ sizeof arr[0];
    min(arr , n);
}