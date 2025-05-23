#include<iostream>
using namespace std;

int Rrotate(vector<int> &arr, int k ){
    int n = arr.size();
    vector<int>temp(k);
//store right k element in temp array
    for (int i = n-k; i<n ;i++){
        temp[i-(n-k)]=arr[i];
    }

    //right move the element of array by k position
    for(int i =n-k-1 ; i>=0 ; i--){
        arr[i+k]=arr[i];
    }

    //move temp array element in orignal array
    
    for (int i = 0 ; i <k ;i++){
        arr[i]=temp[i];
    }

    for (int i = 0 ; i <n ; i++){
        cout<<arr[i];
    }

    return 0;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    int k = 3;
    Rrotate(arr , k);
}