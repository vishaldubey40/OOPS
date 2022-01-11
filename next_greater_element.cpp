#include <bits/stdc++.h>

using namespace std;

vector<int> NGE(vector<int> a){
    stack<int> st;
    vector<int> c(a.size());
    for(int i=0;i<a.size();i++){
        while((!st.empty())&&a[i]>a[st.top()]){
            c[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        c[st.top()]=-1;  //if no greater element present in array;
        st.pop();
    }
    return c;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> nge=NGE(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<v[nge[i]]<<endl;
    }
}
