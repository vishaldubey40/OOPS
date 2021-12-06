#include <iostream>
using namespace std;
class Employee{
    public:
    int a,b;
    };
class Developer : public Employee{
    public:
  //  int a;
     void dis(){
    cout<<"Salary of Developer:"<<a<<endl;
    }
    void getSalary(){
        
        cin>>a;
    }
   
};
class Driver : public Employee {
    public:
    int b;
     void Dri(){
    cout<<"Salary of Driver:"<<b<<endl;}
      void getSalary(){
        cin>>b;
        }
    
};
int main()
{Developer d1;
    Driver d2;

d1.getSalary();
d2.getSalary();
d1.dis();
d2.Dri();


	return 0;
}
