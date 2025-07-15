// Two Sum - Better Approach (Using Hashing/HashMap)

#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool twoSum(vector<int> arr, int n, int target){
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int a = arr[i];
        int needed = target - a;
        if(mp.find(needed) != mp.end()){
            return true;
        }
        mp[a] = i;
    }
    return false;
}

vector<int> twoSumm(vector<int> arr, int n, int target){
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int a = arr[i];
        int needed = target - a;
        if(mp.find(needed) != mp.end()){
            return {mp[needed], i};
        }
        mp[a] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {2,6,5,8,11};
    int n = 5;
    int target = 14;
    cout<<twoSum(arr, n, target)<<endl;
    vector<int> res = twoSumm(arr, n, target);
    for(int val : res){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}