#include<iostream>
#include<vector>
using namespace std;

void rRotate(vector<int>arr , int k){
    int n = arr.size();
    // step 1 - initilize a empty vector
    vector<int>temp(k);

    // store k value of orignal array in temp array
    for(int i = n-k ; i<n ; i++){
        temp[i-(n-k)] =arr[i];
    }
     //move array value right by k place 
        for (int i = n-k-1 ; i>=0 ; i-- ){
            arr[i+k]=arr[i];
        }
    // move temp element in orignal array

    for (int i = 0 ; i < k  ;i++){
        arr[i]=temp[i];
    }

    // print the resultant array
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int k = 3;
    rRotate(arr , k);
}


