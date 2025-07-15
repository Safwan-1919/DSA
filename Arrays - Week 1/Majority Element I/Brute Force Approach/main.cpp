// Majority Element I - Brute Force Approach

#include <iostream>
#include <vector>
using namespace std;

int majorityElement1(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2,2,3,3,1,2,2};
    int n = arr.size();
    cout<<majorityElement1(arr, n)<<endl;
    return 0;
}

// Time Complexity -> O(n^2)
// Space Complexity -> 0(1)