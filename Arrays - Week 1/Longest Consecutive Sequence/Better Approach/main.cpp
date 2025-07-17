#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutiveInteger(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 0;
    for(int i=0; i<n; i++){
        if(arr[i]-1 == lastSmaller){
            cnt++;
            lastSmaller = arr[i];
        }
        else if(arr[i] != lastSmaller){
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main() {
    vector<int> arr = {100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    int n = arr.size();
    cout<<longestConsecutiveInteger(arr, n);
    return 0;
}
