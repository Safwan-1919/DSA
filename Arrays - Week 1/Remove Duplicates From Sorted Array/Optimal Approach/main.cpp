// Remove Duplicates From Sorted Array - Optimal Approach

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int duplicates(vector<int> arr){
    int n = arr.size();
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,5};
    cout<<duplicates(arr);
    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)