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
class student : public person{
    public:
    void display(){
        cout<<name;
    }
};
int main() {
    student anil;
    anil.setname("vishal");
    anil.display();
}
