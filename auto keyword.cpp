#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
  // vector<int> :: iterator it  ;            instead of declaring long expression we can use auto keywor as shhonw in ourl nextline which usaed t determin datatype of variable it
  
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}
