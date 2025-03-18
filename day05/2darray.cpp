//creation and output


#include<iostream>
using namespace std;


int main(){
    int row = 3;
    int col = 4;
   int arr[row][col];
 cout<<"enter the element ";
    for (int i = 0 ; i < row ;i++){
        for (int j = 0 ;  j < col ;j++){
            // cout<<"enter the element "<<i<<" "<<j<<endl;
            cin>>arr[i][j];
        }
    }

cout<<"print output of 2d array"<<endl;

for (int i = 0 ; i < row ;i++){
    for (int j = 0 ;  j < col ;j++){
        // cout<<"enter the element "<<i<<" "<<j<<endl;
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}