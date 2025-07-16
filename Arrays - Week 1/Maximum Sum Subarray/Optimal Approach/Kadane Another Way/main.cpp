// Maximum Sum Subarray - Optimal Approach (Kadane's Algorithm)

#include <iostream>
#include <vector>
using namespace std;

int maximumSumSubarray(vector<int> arr, int n){
    int maxx = arr[0];
    int res = arr[0];
    for(int i=1; i<n; i++){
        maxx = max(maxx + arr[i], arr[i]);
        res = max(res, maxx);
    }
    return maxx;
}

int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3};
    int n = arr.size();
    cout<<maximumSumSubarray(arr, n)<<endl;
    return 0;
}
