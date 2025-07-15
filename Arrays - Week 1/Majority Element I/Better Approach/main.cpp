// Majority Element I - Better Approach (HashMap)

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement1(vector<int> arr, int n){
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second > n/2){
            return it.first;
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

// Time Complexity -> O(nlogn)
// Space Complexity -> 0(n)