#include <iostream>

using namespace std;
class person{
    protected:
    string name;
    public:
    void setname(string iname){
        name=iname;
    }
};
class student : private person{
    public:
    void display(){
        cout<<name;
    }
   void setstudentname(string iname){
       setname(iname);
   } //if we run withoout this it will guve error is inaccessible
};
int main() {
    student anil;
    anil.setstudentname("vishal");
    anil.display();
}
