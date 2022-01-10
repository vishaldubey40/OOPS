#include <bits/stdc++.h>

using namespace std;
unordered_map<char,int> m={{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
string isbalanced(string s){
    stack<char> st;
    for(char bracket:s){
        if(m[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty())  return "No";
            char top=st.top();
            st.pop();
            if(m[top]+m[bracket]!=0)
            return "No";
        }
    }
    if(st.empty())
    return "Yes";
   else return "NO";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string k=isbalanced(s);
    cout<<k;}
}
