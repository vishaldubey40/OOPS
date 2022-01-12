#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
   int n,cnt=0;
   cin>>n;
   while(n){
    //   cnt++;
    //   n=n&(n-1);
    if((n&1)>0) cnt++;
  n= n>>1;
   }
   cout<<cnt<<endl;
}
}
