#include <iostream>
#include <vector>
using namespace std;

void leaderArray(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        bool leader = false;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
        if(leader == true){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
    vector<int> arr = {10,22,12,3,0,6};
    leaderArray(arr);
    return 0;
}
