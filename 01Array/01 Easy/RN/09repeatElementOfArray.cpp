#include<iostream>
using namespace std;

int repeat(vector<int >arr ){
    int ele = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        ele = ele^arr[i];
    }
    cout<<ele;

    return 0;
}

int main (){
    vector<int>arr = {1,2,3,5,5,4,3,2,1};
    repeat(arr);
}