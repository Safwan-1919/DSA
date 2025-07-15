// Two Sum - Brute Force Approach

#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int> arr, int n, int target){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){ // if j=0 then add this line if(i==j) continue;
            if(arr[i]+arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2,6,5,8,11};
    int n = 5;
    int target = 14;
    cout<<twoSum(arr, n, target)<<endl;
    return 0;
}