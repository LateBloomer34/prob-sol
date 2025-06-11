#include<iostream>
using namespace std ; 

int steps(vector<int>arr){
    int n = arr.size();
    int step = 0;
    int mul = 1;
    int neg = 0;
    int count0 = 0;
    for (int i = 0 ; i< n; i++ ){
        if (arr[i]<0){
            step = step+(-arr[i]-1);
            // mul = mul*-1;
            neg++;
        }
        else if(arr[i]>0){
            step = step+(arr[i]-1);
            // mul = mul*1;
        }
        // else if (arr[i]==1){
        //     step = step;
        // }
        else{
            step= step+1;
            count0++;
        }
        
    }
    if (neg%2==0 || count0>0){
        return step;
    }
    else{
        return step+2;
    }
    
}

int main (){
    vector <int> arr = {-1 , -1};
    cout<<steps(arr);
}