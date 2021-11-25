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

class child : public father{
public:
child(int c) : father(c){
    cout<<"child class constructor"<<endl;
}
void display(){
    cout<<"height is"<<height<<endl;
}
};
int main() {
  child vishal(12);
    vishal.display();
}
