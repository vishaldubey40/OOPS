#include <bits/stdc++.h>

using namespace std;
class person{
    int x,y;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
    }
    void show(){
        cout<<"Sum of complex number is: "<<x<<"+"<<y<<"i";
    }
    person add(person c){
        person temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
};
int main() {
  person ob1,ob2,sum;
  ob1.getdata(3,4);
  ob2.getdata(7,8);
  sum=ob1.add(ob2);
  sum.show();
  return 0;
}
