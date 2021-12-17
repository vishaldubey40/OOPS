#include <bits/stdc++.h>

using namespace std;
class Date
{
   protected:
    int n;
};
class check : public Date{
    public:
    void day(){
        cin>>n;
    }
    void display(){
        if(n==1)
            cout<<"Monday";
        
         if(n==2)
            cout<<"Tuesday";
                 if(n==3)
            cout<<"Wednesday";
        
         if(n==4)
            cout<<"Thursday";
         if(n==5)
            cout<<"Friday";
        
         if(n==6)
            cout<<"Saturday";
        
         if(n==7)
            cout<<"Sunday";
        
    }
};
int main()
{
check obj;
obj.day();
obj.display();
	return 0;
}
