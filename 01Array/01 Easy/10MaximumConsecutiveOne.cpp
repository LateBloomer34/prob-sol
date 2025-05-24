#include<iostream>
using namespace std;

int consecutive(vector <int > arr){
    int maxCount = 0;
    int n = arr.size();
    int count = 0;
    for (int i = 0 ; i< n ; i++){
        if (arr[i]==1){
            count++;
            
        }
        else {
                count = 0;
            }
        if (count>maxCount){
                maxCount = count;
            }
    }
    return maxCount;
}

int main (){
    vector <int > arr = {1,1,1,1,0,1,1};
    cout<<consecutive(arr);
}