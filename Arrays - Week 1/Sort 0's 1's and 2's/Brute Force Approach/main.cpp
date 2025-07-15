// Sort 0's, 1's & 2's - Brute Force Approach (Using Sorting)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort012(vector<int> arr, int n){
    //Use any sorting algorithm
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    vector<int> arr = {0,1,1,0,1,2,1,2,0,0,0};
    int n = arr.size();
    vector<int> res = sort012(arr, n);
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// Time Complexity -> O(n^2) or O(nlogn) depends upon sorting algorithm
// Space Complexity -> 0(1)