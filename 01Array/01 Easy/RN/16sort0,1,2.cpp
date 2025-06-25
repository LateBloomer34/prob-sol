#include<iostream>
using namespace std;


// brute approach
/*
void sort(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (arr[i]<arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0 ; i < n  ; i++){
        cout<<arr[i];
    }
}
*/

//optimal approach

int sort(int arr[] , int n ){
    int start = 0 ; 
    int mid = 0;
    int end = n-1;

    while (mid<=end){
        if (arr[mid]==0){
            swap(arr[start], arr[mid]);
            mid++;
            start++;
        }
        else if (arr[mid]==1){
            mid++;
            }
         else{
            swap(arr[end], arr[mid]);
            end--;
        }   
        }
    
    
    return 0;
}
int main (){
    // int arr[] = {2,1,0,1,2,0};
    int arr[] = {0,2,1,2,0,1,2};
    int n = sizeof arr / sizeof arr[0];
    sort(arr , n);
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
}