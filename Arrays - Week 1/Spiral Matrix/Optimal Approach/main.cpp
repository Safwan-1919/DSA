// Spiral Matrix - Optimal Solution 
// Implementation Problem and clean code 

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0].size();
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    vector<int> ans;
    while(top <= bottom && left <= right){
        for(int j=left; j<=right; j++){
            ans.push_back(arr[top][j]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int j=right; j>=left; j--){
                ans.push_back(arr[bottom][j]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i=bottom; i>=top; i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {{1,2,3,4,5},
                               {6,7,8,9,10},
                               {11,12,13,14,15},
                               {16,17,18,19,20},
                               {21,22,23,24,25}};
    vector<int> ans = spiralMatrix(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
