#include <iostream>

using namespace std;

int main() {
    cout.precision(5);
    cout<<234.234<<endl;
    cout<<345.7<<endl;
    //if precision value is less than the floatingd digit then it give output in terms of e
    cout<<345534.3463<<endl;
    //width fn is used to give space befor output
    cout.width(5);
    cout<<"hi"<<endl;
    //but if string value is greater than width than no space will be provided
    cout<<"hi my name is vishal dubey"<<endl;
    //fill fn
    cout.fill('*');//used to fill empty spaces 
    cout.width(5);
    cout<<"hi"<<endl;
    //if we want to fill the value left side then
    cout.setf(ios :: left);
     cout.fill('*');//used to fill empty spaces 
    cout.width(5);
    cout<<"hi"<<endl;
    // here 5 is including 2 vlaue from hi
}
