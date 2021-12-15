#include <bits/stdc++.h>
using namespace std;
class person
{ public:
 string s;
 int a,b,c;
 string s1;
    
};
class master : public person{
    public :
    master(){
        cin>>s>>a>>b>>c>>s1;
    }
    void display(){
        cout<<"Name:"<<s<<endl<<"Code:"<<a<<endl<<"Pay:"<<b<<endl<<"Experience:"<<c<<endl<<"Company name:"<<s1;
    }
};
int main()
{master m1;
m1.display();

	return 0;
cout<<"class master:public account,public admin	master m1; m1.admin::display();m1.account::display(); m1.getexp();m1.getpay();m1.person::display(); ";
}
