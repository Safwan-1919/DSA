#include <iostream>
using namespace std;

void reverseString(string &s){
    int n = s.size();
    string res;
    for(int i=n-1; i>=0; i--){
        res = res + s[i];
    }
    for(int i=0; i<n; i++){
        s[i] = res[i];
    }
}

int main() {
    string s = "coding";
    reverseString(s);
    cout<<s<<endl;
    return 0;
}
