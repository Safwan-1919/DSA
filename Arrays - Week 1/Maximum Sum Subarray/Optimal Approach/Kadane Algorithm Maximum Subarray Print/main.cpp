// Maximum Sum Subarray - Optimal Approach (Kadane's Algorithm)

#include <iostream>
#include <vector>
using namespace std;

void maximumSumSubarray(vector<int> arr, int n){
    int maxx = INT_MIN;
    int sum = 0;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum > maxx){
            maxx = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0){
            sum = 0;
            start = i + 1;
        }
    }
    vector<int> res;
    for(int i=ansStart; i<=ansEnd; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3};
    int n = arr.size();
    maximumSumSubarray(arr, n);
    return 0;
}
