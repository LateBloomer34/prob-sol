#include<iostream>
using namespace std;

int zeroToEnd(vector<int> &arr){
    
    int n = arr.size();
    int j = 0; 
    for(int i =0  ;i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for(int i = 0; i<n ;i++){
        cout<<arr[i];
    }
return 0;
}

int main(){
    vector<int>arr = {1,2,0,1,0,4,0};
    zeroToEnd(arr);
}