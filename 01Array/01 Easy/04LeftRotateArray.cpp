#include<iostream>
using namespace std;

int Lrotate(vector<int> &arr, int k){
        vector<int>temp(k);
        int n = arr.size();

        // store value in temp variable
    for (int i = 0 ; i < k ;i++ ){
        temp[i]=arr[i];
    }
  
    // move the element by k place           vector<int>arr= {1,2,3,4,5,6,7,8};
    for (int i = k ;i<n ;i++){
        arr[i-k]=arr[i];
    }
  
    // move temp variable element into orignal variable
    for (int i = 0 ; i < k ; i++){
        arr[n-k+i]=temp[i];
    }
       for (int i = 0 ; i < n ; i++){
        // cout<<arr[i]<<" ";
    }
   
    return 0;
}

int main(){
    
    vector<int>arr= {1,2,3,4,5,6,7,8};
    int k=1;
    // cout<<"enter the value of k";
    // cin<<k;
    // cout<<endl;
    Lrotate(arr, k);
      for (int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}