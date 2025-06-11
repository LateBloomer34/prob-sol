#include<iostream>
using namespace std;


//approach 1 - uisng reverse loop
/*

void rev(vector<int >arr ){
    int n = arr.size();
    for (int i = n-1 ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
}
*/

// approach 2 - using 2 pointer

int rev (vector<int >arr ){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;
    while (start<end){
        swap(arr[start], arr[end]);
        start++ ; 
        end--;
    }
    for(int i= 0 ; i < n ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7};
    rev(arr);
}