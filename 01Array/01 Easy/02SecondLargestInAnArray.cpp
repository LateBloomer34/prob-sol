#include<iostream>
using namespace std;


pair <int , int> sec (vector<int>arr){
    int largest = INT_MIN;
    int secLar = INT_MIN;

    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i]>largest){
            secLar = largest;
            largest = arr[i];
        }
        else if (arr[i]>secLar && arr[i]<largest){
            secLar = arr[i];
        }
    }
    return {largest , secLar};
}

int main (){
    vector<int>arr = {3,4,6,7,9,2,8,6};
    pair<int, int>res = sec(arr);
    cout<<res.first<<" "<<res.second;
}