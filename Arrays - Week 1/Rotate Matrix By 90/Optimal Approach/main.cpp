#include <iostream>
#include <vector>
using namespace std;

void rotateBy90(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<m; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        int start = 0, end = n - 1;
        while(start < end){
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int n = matrix.size();
    int m = matrix[0].size();
    rotateBy90(matrix);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
