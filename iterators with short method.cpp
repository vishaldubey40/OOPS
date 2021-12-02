#include <bits/stdc++.h>

using namespace std;

int main() {
vector<int> v={23,12,2,3,34};

for(int i =0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
vector<int> :: iterator it;    //iterator to point out containers
for(it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";                         //using poointer
}cout<<endl;
for(int value :v){                    //t;his short method for using for loop 
    cout<<value<<" ";
}
    
}
