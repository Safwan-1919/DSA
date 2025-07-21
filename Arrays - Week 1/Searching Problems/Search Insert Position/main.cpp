// Search Insert Position

#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int> arr, int x){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int ans = n;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= x){
            ans = mid;
            end = mid - 1;
        } 
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,4,6,8,10,14,16,18};
    int target = 5;
    cout<<searchInsertPosition(arr, target)<<endl;;
    return 0;
}
