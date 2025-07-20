// Remove Duplicates From Sorted Array - Brute Force Approach

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int duplicates(vector<int> arr){
    int n = arr.size();
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int k = st.size();
    int j = 0;
    for(int ele : arr){
        arr[j] = ele;
        j++;
    }
    return k;
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,5};
    cout<<duplicates(arr);
    return 0;
}

// Time Complexity -> O(nlogn) + O(n)
// Space Complexity -> O(n)