// Sort 0's, 1's & 2's - Better Approach (Using 3 variables)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort012(vector<int> arr, int n){
    int count1, count2, count3;
    count1 = count2 = count3 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count1++;
        }
        else if(arr[i] == 1){
            count2++;
        }
        else{
            count3++;
        }
    }
    for(int i=0; i<count1; i++){
        arr[i] = 0;
    }
    for(int i=count1; i<count1+count2; i++){
        arr[i] = 1;
    }
    for(int i=count1+count2; i<n; i++){
        arr[i] = 2;
    }
    return arr;
}

int main() {
    vector<int> arr = {0,1,1,0,1,2,1,2,0,0,0};
    int n = arr.size();
    vector<int> res = sort012(arr, n);
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// Time Complexity -> O(4n)
// Space Complexity -> 0(1)