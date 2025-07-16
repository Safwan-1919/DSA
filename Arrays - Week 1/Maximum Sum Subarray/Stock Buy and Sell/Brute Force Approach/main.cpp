#include <iostream>
#include <vector>
using namespace std;

int stockBuyAndSell(vector<int> arr, int n){
    int maxx = INT_MIN;
    int diff = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                diff = arr[j] - arr[i];
                maxx = max(maxx, diff);
            }
        }
    }
    return maxx;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int n = arr.size();
    cout<<stockBuyAndSell(arr, n)<<endl;
    return 0;
}
