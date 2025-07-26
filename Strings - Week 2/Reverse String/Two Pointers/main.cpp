#include <iostream>
using namespace std;

void reverseString(string &s){
    int n = s.size();
    int start = 0;
    int end = n - 1;
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main() {
    string s = "coding";
    reverseString(s);
    cout<<s<<endl;
    return 0;
}
