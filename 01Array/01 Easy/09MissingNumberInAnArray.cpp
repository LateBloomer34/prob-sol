#include<iostream>
using namespace std;

int missing(vector<int>arr){
    int n = arr.size();
        int miss;
    for(int i = 1 ; i < n ; i++){
        if (arr[i] != arr[i-1]+1){
            miss = arr[i]-1;
        }
        else{
            return 0;
        }
    }

    return miss;
}

int main(){
    vector<int>arr = {1,2,3,4,5};
   cout<<missing(arr);
}