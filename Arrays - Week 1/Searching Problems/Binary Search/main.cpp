// Searching Algorithm

#include <iostream>
#include <vector>
using namespace std;

void binarySearch(vector<int> arr, int x){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == x){
            cout<<"Found at "<<mid<<endl;
            return;
        } 
        else if(arr[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<"Not Found"<<endl;
}

int main() {
    vector<int> arr = {2,3,6,10,11};
    int target = 6;
    binarySearch(arr, target);
    return 0;
}
