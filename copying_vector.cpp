#include <bits/stdc++.h>

using namespace std;

void printvec(vector<int> v){
     int k=v.size();
        cout<<"size of vector is :"<<k<<endl;
    for(int i=0;i<v.size();i++){
       
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main() {
    vector<int> v;
    v.push_back(8);
     v.push_back(6);
      v.push_back(3);
       v.push_back(5);
       vector<int> &v2=v;   //copying vector with ref so any change in v2 vector it will reflect in v vector also
    printvec(v);
    v.pop_back();
     printvec(v);
     cout<<"second vector is :\n";
     printvec(v2);
    
   
}
