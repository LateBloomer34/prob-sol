#include <iostream>
#include <vector>
using namespace std;

int Lsubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int start = 0, end = 0;
    int sum = 0;
    int maxCount = 0;

    while (end < n) {  // run till end is less the length of array
        sum = sum +arr[end];

    while (sum > k && start <= end) {   // conditon till sum is greater than target 
        sum = sum - arr[start];
        start++;
    }
        if (sum == k) {         // condition when sum became equal to target - find the total steps 
            maxCount = max(maxCount, end - start + 1); 
    }
        end++;  
    }    

    return maxCount;
}

int main() {
    vector<int> arr = {2, 3, 5, 1, 9,0,0,0,0,1};
    int k = 10;
    cout << Lsubarray(arr, k) << endl;
}
