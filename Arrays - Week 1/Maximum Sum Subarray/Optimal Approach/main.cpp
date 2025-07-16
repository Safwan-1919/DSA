// Maximum Sum Subarray - Optimal Approach (Kadane's Algorithm)

#include <iostream>
#include <vector>
using namespace std;

int maximumSumSubarray(vector<int> arr, int n){
    int maxx = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        if(sum > maxx){
            maxx = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxx;
}

int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3};
    int n = arr.size();
    cout<<maximumSumSubarray(arr, n)<<endl;
    return 0;
}
