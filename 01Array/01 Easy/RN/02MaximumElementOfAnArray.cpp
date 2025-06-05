#include<iostream>
using namespace std;

int max (int arr[] , int n ){
    int lar = arr[0];
    for (int i = 0 ; i <n  ; i++){
        if (arr[i]>lar){
            lar = arr[i];
        }
    }
    cout<<"largest element of an array is :- "<<lar;
    return 0;
}

int main (){
    int arr[] = {2,3,11,8,7,-2};
    int n = sizeof arr/ sizeof arr[0];
    max(arr , n);
}