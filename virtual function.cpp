#include <bits/stdc++.h>

using namespace std;

class person{
    public:
   virtual void introduce(){
        cout<<"hi i am person"<<endl;
    }
};
class student : public person{
    void introducr(){
        cout<<"hi i am student"<<endl;
    }
};
class farmer : public person{
    void introduce(){
        cout<<"hi i am farmer"<<endl;
    }
};

void ask(person &p){
    p.introduce();
}
int main() {
   farmer vishal;
   student navin;
   ask(vishal);
   ask(navin);
   
}
