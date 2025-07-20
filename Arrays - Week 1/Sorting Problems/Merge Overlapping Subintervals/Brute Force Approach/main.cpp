#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeOverlappingSubintervals(vector<vector<int>> arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && ans.back()[1] >= end  ){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(arr[j][0] <= end){
                end = max(end, arr[j][1]);
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {{1,3}, {2,6}, {8,9}, {9,11}, {8,10}, {2,4}, {15,18}, {16,17}};
    vector<vector<int>> ans = mergeOverlappingSubintervals(arr);
    cout<<"[ ";
    for(int i=0; i<ans.size(); i++){
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "]" << " ";
    }
    cout<<"]";
    return 0;
}
