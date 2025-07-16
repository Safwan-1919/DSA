#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr, int n){
    int posIndex = 0;
    int negIndex = 1;
    vector<int> res(n, 0);
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            res[posIndex] = arr[i];
            posIndex += 2;
        }
        else{
            res[negIndex] = arr[i];
            negIndex += 2;
        }
    }
    return res;
}

int main() {
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();
    vector<int> res = rearrangeArray(arr, n);
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
