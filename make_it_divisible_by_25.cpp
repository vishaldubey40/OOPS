#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       long long int n,k,m;
        cin>>n;
        stringstream sso;
        sso<<n;
        int a[4];
        string s;
        sso>>s;
    long long   int min=INT_MAX;
              // cout<<min<<endl;
         k=s.length();
       //cout<<s;
       int ka;
        for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
       if(s[i]=='2'){
           if(s[j]=='5'){
               ka=j-i-1;
               m=k-j-1;
               if((ka+m)<min)
               min=ka+m;
                
           }
       }if(s[i]=='7'){
           if(s[j]=='5'){
               ka=j-i-1;
          // cout<<ka<<endl;
               m=k-j-1;
               if((ka+m)<min)
               min=ka+m;
           }
       }if(s[i]=='5'){
           if(s[j]=='0'){
               ka=j-i-1;
               m=k-j-1;
              if((ka+m)<min)
               min=ka+m;
           }
       }if(s[i]=='0'){
           if(s[j]=='0'){
               ka=j-i-1;
          // cout<<ka;
               m=k-j-1;
                if((ka+m)<min)
               min=ka+m;
              // cout<<m<<endl;
           }
       }
        }
        }
        
       cout<<min<<endl;
    }
}
