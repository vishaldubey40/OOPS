#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            if(b%2==0){
                cout<<"Even\n";
            }else
            cout<<"Odd\n";
            continue;
        }
        if(b%2==1){
        if(a%2==0){
            cout<<"Even"<<endl;
        }else {
                cout<<"Odd"<<endl;
            }
        }else
        cout<<"Impossible"<<endl;
    }
}
