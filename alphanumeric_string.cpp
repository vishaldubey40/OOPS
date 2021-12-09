#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
char s[10001];

while(t--){
  cin>>s;
  int sum=0,sum1=0;
int k= strlen(s);
for(int i=0;i<k;i++){
    if(isdigit(s[i])){
        int c=s[i];
        sum=c-48;
        sum1+=sum;
    }
}

cout<<sum1<<endl;
}

	return 0;
}
