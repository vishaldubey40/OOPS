#include <bits/stdc++.h>

using namespace std;

class person{
    public:
   virtual void introduce()=0;
};
 void person :: introduce(){
     cout<<"hey from person"<<endl;
 }
class student : public person{
 public:
 void introduce(){
        cout<<"hi i am student"<<endl;
    person ::introduce(); }
   
};
int main() {
 
    student navin;
 navin.introduce();
    
}
