// Maximum Sum Subarray - Better Approach

#include <iostream>
#include <vector>
using namespace std;

int maximumSumSubarray(vector<int> arr, int n){
    int maxx = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            maxx = max(maxx, sum);
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
