#include<iostream>
using namespace std;

//brute approach
void repeat(vector<int >arr ){
    int n = arr.size();
for (int i = 0 ; i < n ;i++){
    bool repeting = true;
    for (int j = 0 ; j < n ; j++){
        if (i == j){
            continue;
        }
        if (arr[i]== arr[j]){
            repeting = false;
        }
    }
    if (repeting){
        cout<<arr[i]<<endl;
    }
}
}

//optimal approach
/*
int repeat(vector<int >arr ){
    int ele = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        ele = ele^arr[i];
    }
    cout<<ele;

    return 0;
}
*/

int main (){
    vector<int>arr = {1,2,3,5,5,4,3,2,1};
    repeat(arr);
}