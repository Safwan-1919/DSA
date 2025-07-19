// Number of Subarrays with Sum k - Better Approach 

#include <iostream>
#include <vector>
using namespace std;

int noOfSubarraysSumK(vector<int> arr, int k){
    int count = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout<<noOfSubarraysSumK(arr, k);
    return 0;
}

// Time Complexity -> ~O(n^2)
// Space Complexity -> O(1)