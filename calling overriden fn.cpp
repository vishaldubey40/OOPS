#include <bits/stdc++.h>

using namespace std;
class person{
    public:
    void introduce(){
        cout<<"person is called\n";
    }
};
class student : public person{
   public: void introduce(){
        cout<<"student is called\n";           //fn is overriden
    }
};
int main() {
   student vishal;
   vishal.introduce();
   vishal.person::introduce();           //calling overriden fn
}
