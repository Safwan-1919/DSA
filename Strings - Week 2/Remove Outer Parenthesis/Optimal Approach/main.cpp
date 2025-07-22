#include <iostream>
using namespace std;

string removeOuterParenthesis(string s){
    int n = s.size();
    string res;
    int openCount = 0;
    int closeCount = 0;
    int start = 0;
    for(int i=0; i<n; i++){
        char c = s[i];
        if(c == '('){
            openCount++;
        }
        else if(c == ')'){
            closeCount++;
        }
        if(openCount == closeCount){
            res += s.substr(start + 1, i - start - 1);
            start = i + 1;
        }
    }
    return res;
}

int main() {
    string s = "((()))(())()";
    cout<<removeOuterParenthesis(s);
    return 0;
}
