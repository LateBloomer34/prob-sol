#include<iostream>
using namespace std ;

int duplicate(vector<int>arr ){
    int n = arr.size();
vector<int>duplicate(n);
for (int i = 0 ; i < n ; i++){
    duplicate[arr[i]]++;
}

bool dupli;
for(int i = 0 ; i < n ; i++){
    if (duplicate [i]>1){
        cout<<i;
        dupli = true;
    }
}
if (dupli!=true){
    cout<<"duplicate not present";
}
return 0;
}

int main (){
    // vector<int>arr = {1,2,3,4,0,1,2,0,5,6,7,4,9,9,9};
    vector<int>arr = {1,2,3,4,5,6,7,8,9,0};
    duplicate(arr);
}