#include <bits/stdc++.h>

using namespace std;

class person{
    int mark;
    public:
    person(){
        mark=0;
    }
    person(int m){
        mark=m;
    }
    void yourmarkplease(){
        cout<<"Your mark is: "<<mark<<endl;
        }
        void operator+=(int bonusmark){
            mark=mark+bonusmark;
        }
        friend void operator-=(person &curobj,int redmark);
};
void operator-=(person &curobj,int redmark){
    curobj.mark-=redmark;
}

int main() {
   person anil(45);
   anil.yourmarkplease();
   anil+=20;
   anil.yourmarkplease();
     anil-=20;
   anil.yourmarkplease();
}
