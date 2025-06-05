#include<iostream>
using namespace std;

int rev(vector<int>arr ){
    int n = arr.size();
    
    // method 1 
    
    // for (int i =  n-1 ; i>=0 ;i--){
    //     cout<<arr[i]<<" ";
    // }

    // method 2

    int start = 0 ;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i =  0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6};
    rev(arr);
}