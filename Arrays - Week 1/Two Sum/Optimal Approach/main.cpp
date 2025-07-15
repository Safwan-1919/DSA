// Two Sum - Optimal Approach (Sort and Two Pointer)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool twoSum(vector<int> arr, int n, int target){
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = n-1;
    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            return true;
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2,6,5,8,11};
    int n = 5;
    int target = 14;
    cout<<(twoSum(arr, n, target)? "Yes" : "No")<<endl;
    return 0;
}