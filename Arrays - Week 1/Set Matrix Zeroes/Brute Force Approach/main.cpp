#include <iostream>
#include <vector>
using namespace std;

const int MARKER = INT_MIN + 1;

void markRow(vector<vector<int>>& matrix, int i, int n){
    for(int j=0; j<n; j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = MARKER;
        }
    }
}

void markCol(vector<vector<int>>& matrix, int j, int m){
    for(int i=0; i<m; i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = MARKER;
        }
    }
}

void setMatrixZeroes(vector<vector<int>> matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 0){
                markRow(matrix, i, n);
                markCol(matrix, j, m);
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == MARKER){
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
