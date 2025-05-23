#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int uni(vector<int>&arr1 , vector<int>&arr2){
    vector<int>result ;
    int n = arr1.size();
    int m = arr2.size();
        int i =0 ;
        int j = 0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if (result.size()==0 || result.back()!=arr1[i]  ){
            result.push_back(arr1[i]);
        }
            i++;
        }
        else if (arr2[j]<arr1[i]) {
            if (result.size()==0 ||  result.back()!=arr2[j] ){
                result.push_back(arr2[j]);
            }
                j++;    
        }
        else{
            if (result.size()==0 ||  result.back()!=arr2[j] || result.back()!=arr1[i] ){
                result.push_back(arr2[j]);
            }
                j++;    
                i++;
        }
    }
    while(i<n){
        if (result.size()==0 ||  result.back()!=arr1[i]  ){
            result.push_back(arr1[i]);
        }
            i++;
    }
     while(j<m){
        if ( result.size()==0 || result.back()!=arr2[j]  ){
            result.push_back(arr2[j]);
        }
            j++;
    }

    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}

int main(){
    vector<int>arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int>arr2 = {2,3,4,4,5,11,12};
    uni(arr1 ,arr2);
}