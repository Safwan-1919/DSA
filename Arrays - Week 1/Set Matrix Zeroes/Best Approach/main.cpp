#include <iostream>
#include <vector>
using namespace std;

void setMatrixZeroes(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main() {
    vector<vector<int>> matrix = {{1,1,1,1}, {1,0,0,1}, {1,1,0,1}, {1,1,1,1}};
    setMatrixZeroes(matrix);
    return 0;
}
