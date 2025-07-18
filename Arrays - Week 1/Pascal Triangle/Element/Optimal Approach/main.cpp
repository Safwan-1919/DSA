#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {{1}, {1,1}, {1,2,1}, {1,3,3,1}, {1,4,6,4,1}, {1,5,10,10,5,1}};
    int m = arr.size();
    cout<<pascalElement()<<endl;
    return 0;
}
