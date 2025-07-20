// Maximum Product Subarray - Brute Force Approach

#include <iostream>
#include <vector>
using namespace std;

int maximumProductSubarray(vector <int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        int prod = 1;
        for(int j=i; j<n; j++){
            prod *= arr[j];
            maxi = max(maxi, prod);
        }
    }
    return maxi;
}

int main() {
    vector<int> arr = {-2, 3, 4, -1, 0, -2, 3, 1, 4, 0, 4, 6, -1, 4};
    cout<<maximumProductSubarray(arr)<<endl;
    return 0;
}

// Time Complexity -> O(n^2)
// Space Complexity -> O(1) 