// Maximum Product Subarray - Optimal Approach 1

#include <iostream>
#include <vector>
using namespace std;

int maximumProductSubarray(vector <int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
    int pref = 1;
    int suff = 1;
    for(int i=0; i<n; i++){
        pref *= arr[i];
        suff *= arr[n - i - 1];
        maxi = max(maxi, max(pref, suff));
    }
    return maxi;
}

int main() {
    vector<int> arr = {-2, 3, 4, -1, 0, -2, 3, 1, 4, 0, 4, 6, -1, 4};
    cout<<maximumProductSubarray(arr)<<endl;
    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1) 