#include <bits/stdc++.h>

using namespace std;
class person{
    private:
    int age;
    public:
    void askage(int i){
       this->age=i;
    }
    void display(){
        cout<<this->age<<endl;
    }
};
int main() {
  person vishal;
  vishal.askage(34);
  vishal.display();
}
