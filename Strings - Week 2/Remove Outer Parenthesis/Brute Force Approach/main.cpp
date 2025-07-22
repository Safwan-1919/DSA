#include <iostream>
using namespace std;

string removeOuterParenthesis(string s){
    string res;
    int count = 0;
    for(int c : s){
        if(c == '('){
            if(count > 0){
                res += c;
            }
            count++;
        }
        if(c == ')'){
            count--;
            if(count > 0){
                res += c;
            }
        }
    }
    return res;
}

int main() {
    string s = "((()))(())()";
    cout<<removeOuterParenthesis(s);
    return 0;
}
