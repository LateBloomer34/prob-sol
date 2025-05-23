#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr){
    int lar = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        if (arr[i]>lar){
            lar = arr[i];
        }
    }
    return lar;
}

int main (){
    vector <int>arr = {8,8,7,16,5};
    cout<<largest(arr);
}