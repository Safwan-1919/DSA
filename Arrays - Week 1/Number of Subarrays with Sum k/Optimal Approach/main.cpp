// Number of Subarrays with Sum k - Optimal Approach 
// Occurence - using Hashing

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int noOfSubarraysSumK(vector<int> arr, int k){
    int n = arr.size();
    unordered_map<int, int> mp;
    mp[0] = 1;
    int prefSum = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        prefSum += arr[i];
        int remove = prefSum - k;
        cnt += mp[remove];
        mp[prefSum] += 1;
    }
    return cnt;
}

int main() {
    vector<int> arr = {3,-3,1,1,1};
    vector<int> arr1 = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout<<noOfSubarraysSumK(arr, k);
    cout<<endl;
    cout<<noOfSubarraysSumK(arr1, k);
    return 0;
}

// Time Complexity -> ~O(n) or O(nlogn) - depends upon map
// Space Complexity -> O(n)