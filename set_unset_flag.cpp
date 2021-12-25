#include <iostream>

using namespace std;

int main() {
    

   cout.setf(ios :: showpos| ios ::showpoint);  //setf is ios base class and showpos is used to  print positive value before the output
    cout<<100.2<<endl;
    cout<<-100<<endl;
    cout<<100<<endl;
    cout.unsetf(ios :: showpos); //used to unset the sign;
    cout<<100<<endl;
    //how to set all the flags;
    auto flag = ios :: showpos | ios:: showbase | ios::showpoint; 
    //used to combine all flags into single one
    cout.flags(flag);  //here flags is a fn with parameter flag
      cout<<100<<endl;
        cout<<100.67<<endl;
          cout<<100<<endl;
}
