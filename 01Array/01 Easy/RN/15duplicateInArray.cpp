#include<iostream>
using namespace std;

int duplicate(vector<int>arr){
    int n = arr.size();
//brute approach
/*
    vector<int>res;
for (int i = 0 ; i< n-1 ; i++){
    for (int j = i+1 ; j<n ; j++){
        if (arr[i]== arr[j]){
            res.push_back(arr[j]);
        }
    }
}
if (res.empty()== false){
for (int i = 0 ; i < res.size() ; i++){
    cout<<res[i]<<" ";
}}
else{
    cout<<-1;
}
return 0;

*/

//optimal approcah
vector<int>result(n);
bool duplicate;
for(int i = 0 ; i < n  ; i++){
    int index = arr[i];         // or we can directly write  => result[arr[i]]++
    result[index]++;     //increse the value of result array element in arr[i] position        
}

//to print repeat value
for (int i = 0 ; i < n ; i++){
    if (result[i]>1){
        cout<<i<<" ";
        duplicate =  true;
    }
   
}
// if no repeat value
if (duplicate != true){
cout<<-1;
}
return 0;
}

int main (){
    // vector<int>arr = {2,3,1,2,3,0,7,0,7,0};
    vector<int>arr = {1,2,3,4,5,6,7,8,0};
    duplicate(arr);
}