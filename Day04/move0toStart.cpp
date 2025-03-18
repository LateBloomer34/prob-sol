#include<iostream>
using namespace std;

void move(int arr[], int n ){
    int j = 0 ;
    int i = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]==0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

for (int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}
}

//using while loop
/*
void move(int arr[], int n ){
    int j = 0 ;
    int i = 0 ;
    while(i<n){
        if (arr[i]==0){
            swap(arr[i], arr[j]);
            j++;
            i++;
        }
        else{
            i++;
        }
    }

for (int i = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
}
}
*/

int main (){
    int arr[] = {0,1,0,3,2,1,0,0,0};
    int n = sizeof arr / sizeof arr[0];
    move(arr , n);
}