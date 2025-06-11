#include<iostream>
using namespace std;

int missing(vector<int>arr){
    int n = arr.size();
    int tot = 0;
    int arrTot = 0;
for (int i = 1 ; i<=n+1 ;i++){
    tot = tot^i;
}
cout<<tot<<endl;
for (int i = 0 ; i<n ; i++){
    arrTot = arrTot ^ arr[i];
}
cout<<arrTot<<endl;
int res ;    
res = tot^arrTot;
    return res;
}

int main (){
    vector<int>arr = {1,2,3,5};
    cout<<missing(arr);
}