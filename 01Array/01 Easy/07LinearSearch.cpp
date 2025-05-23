#include<iostream>
using namespace std;

int Lsearch(vector<int>arr ,int num){
    for(int i = 0 ;i<arr.size() ;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return 0;
}

int main(){
    vector<int>arr = {5,4,3,2,1};
    int num = 5;
   cout<< Lsearch(arr, num);
}