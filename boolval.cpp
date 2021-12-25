#include <iostream>

using namespace std;

int main() {
   bool boolval;
   //normal 0-false ,1-true
   cin>>boolval;
   cout<<boolval<<endl;
   //for alphabatical printing true or false
   cin.setf(ios :: boolalpha);
  cout.setf(ios :: boolalpha);
    cin>>boolval;
    cout<<boolval<<endl;
    //another way for boolalpha 
    cin>>boolalpha>>boolval;
    cout<<boolalpha<<boolval<<endl;
}
