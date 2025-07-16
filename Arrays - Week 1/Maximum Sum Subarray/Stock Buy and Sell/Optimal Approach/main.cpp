#include <iostream>
#include <vector>
using namespace std;

int stockBuyAndSell(vector<int> arr, int n){
    int cost = 0;
    int profit = 0;
    int mini = arr[0];
    for(int i=1; i<n; i++){
        cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(arr[i], mini);
    }
    return profit;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int n = arr.size();
    cout<<stockBuyAndSell(arr, n)<<endl;
    return 0;
}
