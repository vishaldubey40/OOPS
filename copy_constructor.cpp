#include <bits/stdc++.h>

using namespace std;

class person{
    public:
    int age;
    string name;
    person(int age,string name){
        this->age=age;
        this->name=name;
    }
    void introduce(){
        cout<<"My name is: "<<name<<" and age is "<<age;
    }
};

int main() {
   person vishal(23,"vishal");
   vishal.introduce();
   person duplicatevishal =vishal;
   duplicatevishal.introduce();
   return 0;
}
