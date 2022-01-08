#include <bits/stdc++.h>

using namespace std;
class person{
    int x,y;
    public:
    void getdata(int a,int b){
        x=a;
    }
    void show(){
        cout<<"Sum of complex number is: "<<x;
    }
    person operator ++(){
        person temp;
        temp.x=++x;
        return temp;
    }
     person operator ++(int){
        person temp;
        temp.x=x++;
        return temp;
    }
};
int main() {
  person ob1,ob2,sum;
  ob1.getdata(3,4);
  ob2.getdata(76,8);
  sum=++(ob2);                   //ob1.add(ob2);
  sum.show();
  sum=(ob1)++; 
  ob1.show();
  sum.show();
  return 0;
}
