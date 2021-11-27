#include <bits/stdc++.h>

using namespace std;

class person{
    public:
   virtual void introduce(){
        cout<<"hi i am person"<<endl;
    }
};
class student : public person{
 public:    void introduce(){
        cout<<"hi i am student"<<endl;          //virtual function also inherita in the derived class
    }
};
class farmer : public student{
    public: void introduce(){
        cout<<"hi i am farmer"<<endl;
    }
};

void ask(person &p){
    p.introduce();
}
int main() {
   person sneha;
    student navin;
      farmer vishal;
   ask(sneha);
   ask(navin);
   ask(vishal);
}
