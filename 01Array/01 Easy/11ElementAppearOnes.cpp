#include<iostream>
using namespace std;

int appear(vector<int>arr ){
    int res=0;    
    int n = arr.size();
    for (int i = 0 ; i < n ; i++){
        res = res^arr[i];
    }
return res;
}

int main (){
    vector<int>arr = {4,1,4,1,2};
    cout<<appear(arr);
}