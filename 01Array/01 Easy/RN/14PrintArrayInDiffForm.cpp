#include<iostream>
using namespace std;

void print (vector<int>arr){
    int n = arr.size();
    for(int i = 0 ; i<n ;  i++){
        for (int j = i ; j<n ; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

int main (){
    vector<int>arr = {3,13,12,7,4};
    print(arr);
}