#include<iostream>
using namespace std ;

int lRotate(vector<int >arr,  int k){
    int n = arr.size();
    //initilize a temp array of k size;
    vector<int>temp(k);

    // move lest k element of orignal array in temp array
for (int i = 0 ; i < k ; i++){
    temp[i]=arr[i];
}
    // lest rotate array element by k place
    for (int i = k ; i<n ; i++){
       arr[i-k] = arr[i];
    }
    //move temp element in orignal array
    for (int i = 0 ; i < k ; i++){
        arr[(n-k)+i] = temp[i];
    }

// print the resultant array
for (int i = 0 ; i <  n ;i++){
    cout<<arr[i];
}
return 0;
}

int main (){
    vector<int >arr = {1,2,3,4,5,6,7};
    int k = 3 ; 
    lRotate(arr , k);
}