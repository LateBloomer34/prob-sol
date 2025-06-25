#include<iostream>
using namespace std;

int sort (vector<int> & arr){
    int n = arr.size();
    int start = 0 ;
    int mid = 0 ; 
    int end = n-1;
    while(mid<=end){
        if (arr[mid]==0){
            swap(arr[start], arr[mid]);
                start++;
                mid++;
            }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr[end], arr[mid]);
            end--;
        }
    }
    return 0;
}

int main(){
    // vector<int>arr = {0,2,1,2,0,1,2};
    vector<int>arr = {2,1,0,1,2,0};
    sort(arr);
    for (int i = 0 ;i < arr.size() ; i++){
        cout<<arr[i];
    }
}