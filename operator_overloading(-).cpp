#include <bits/stdc++.h>

using namespace std;

class person{
    
    int intmark;
    int extmark;
    public:
    person(){
        intmark=0;
        extmark=0;
    }
    person(int imark,int emark){
        intmark=imark;
        extmark=emark;
    }
    void display(){
        cout<<intmark<<endl<<extmark;
    }
    person operator+(person m){
        person temp;
        temp.intmark=intmark+m.intmark;
        temp.extmark=extmark + m.extmark;
        return temp;
    }
    person operator-(person m);
};

person person :: operator-(person m){
     person temp;
        temp.intmark=intmark-m.intmark;
        temp.extmark=extmark - m.extmark;
        return temp;
}

int main() {
  person m1(10,20),m2(30,20);
  person m3=m1+m2;
 person m4=m1-m2;
  m3.display();
  m4.display();
}
