#include <bits/stdc++.h>

using namespace std;

class person{
    public:
    int age;
    string *name;
  
    person(int age,string name){
        this->age=age;
        (this->name)= new string(name);
    }
    void introduce(){
        cout<<"My name is: "<<*name<<" and age is "<<age<<endl;
    }
    void changenameandage(int age ,string name){
        this->age=age;
        *(this->name)=name;
    }
};

int main() {
   person vishal(23,"vishal");
   vishal.introduce();
   person duplicatevishal =vishal;
   duplicatevishal.introduce();
       vishal.changenameandage(236,"Vishal Dubey");
       vishal.introduce();
       duplicatevishal.introduce();
   return 0;
}
