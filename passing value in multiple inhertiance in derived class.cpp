#include <bits/stdc++.h>

using namespace std;
class father{
    protected:
    int height;
    public:
    father(int h){
        height=h;
    }
};
class mother{
    protected:
    string name;
        public:
    mother(string s){
        name=s;
    }
};
class child : public father,public mother{
public:
child(int c,string color) : father(c) , mother(color){
    cout<<"child class constructor"<<endl;
}
void display(){
    cout<<"height is"<<height<<endl;
    cout<<"name is"<<name<<endl;
}
};
int main() {
  child vishal(12,"heli");
    vishal.display();
}
