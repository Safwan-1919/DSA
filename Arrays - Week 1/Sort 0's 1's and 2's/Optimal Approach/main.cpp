// Sort 0's, 1's & 2's - Optimal Approach (Dutch National Flag Algorithm)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort012(vector<int> arr, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

// Time Complexity -> O(n)
// Space Complexity -> 0(1)