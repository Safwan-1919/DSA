// Majority Element I - Optimal Approach (Moore's Voting Algorithm)

#include <iostream>
#include <vector>
using namespace std;

int majorityElement1(vector<int> arr, int n){
    int count = 0;
    int ele;
    for(int i=0; i<n; i++){
        if(count == 0){
            ele = arr[i];
            count = 1;
        }
        else if(arr[i] == ele){
            count++;
        }
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == ele){
            count1++;
        }
    }
    if(count1 > n/2){
        return ele;
    }
    return -1;
}

int main() {
    vector<int> arr = {2,2,3,3,1,2,2};
    int n = arr.size();
    cout<<majorityElement1(arr, n)<<endl;
    return 0;
}

// Time Complexity -> O(n) + O(n) [if problem says there exists majority then second loop is not required and it will be O(n)] = O(2n)
// Space Complexity -> 0(1)