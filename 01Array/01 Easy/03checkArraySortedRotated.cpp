#include<iostream>
using namespace std;

int rotate(vector<int>arr , int &count){
    int n = arr.size();
        for (int i = 0 ; i < arr.size(); i++){
            if (arr[i]>arr[(i+1)%n]){
                count++;
            }
        }
    return count<=1;
}

int main (){
        vector<int>arr = {1,2,3,4,5,6};  //sorted

        //Test Cases
        // vector<int> arr1 = {3, 4, 5, 1, 2}; // Sorted and rotated
        // vector<int> arr2 = {1, 2, 3, 4, 5}; // Sorted (0 rotations)
        // vector<int> arr3 = {1, 3, 2};       // Not sorted and rotated
        // vector<int> arr4 = {5, 1, 2, 3, 4}; // Sorted and rotated
        // vector<int> arr5 = {1, 1, 1, 1, 1}; // Sorted (with duplicates)
        // vector<int> arr6 = {2, 1, 3, 4};    // Not sorted and rotated (multiple disorders or wrong wrap-around)
        // vector<int> arr7 = {1};             // Single element
        // vector<int> arr8 = {};              // Empty array
        // vector<int> arr9 = {10, 20, 30, 4, 5}; // Sorted and rotated
        // vector<int> arr10 = {3, 2, 1};     // not sorted
        int count = 0;
        rotate(arr, count);
        if (count<=1){cout<<"sorted";}
        else{cout<<"not sorted";}
}