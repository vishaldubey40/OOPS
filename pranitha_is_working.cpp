#include <bits/stdc++.h>
using namespace std;
class student
{public:
int a,b,c,d,e,f;
    
};
class laboratory
{public:
int l;
    
};
class marklist:public student,public laboratory
{  public:
void get(){
    cin>>a>>b>>c>>d>>e>>f;
}
void labmark(){
    cin>>l;
}
void display(){
    float k=(b+c+d+e+f+l)/6;
    cout<<a<<endl<<b+c+d+e+f+l<<endl<<fixed<<setprecision(0)<<k;
}
    
};
int main()
{  marklist obj;
    obj.get();

obj.labmark();
obj.display();

	return 0;
}
