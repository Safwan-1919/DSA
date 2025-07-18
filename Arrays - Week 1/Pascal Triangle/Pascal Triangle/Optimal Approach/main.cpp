#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int numRows){
    vector<vector<int>> ans;
    for(int i=0; i<numRows; i++){
        vector<int> temp;
        long long value = 1;
        for(int j=0; j<=i; j++){
            temp.push_back(value);
            value = value * (i - j);
            value = value / (j + 1);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main() {
    int numRows = 6;
    vector<vector<int>> res = pascalTriangle(numRows);
    for(int i=0; i<numRows; i++){
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
