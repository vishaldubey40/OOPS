#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i,j,k,l,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        k =a[i];
        j=i-1;
        while(j>=0&&k<a[j]){
           a[j+1]=a[j];
           j=j-1;
        }
        a[j+1]=k;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    
}
