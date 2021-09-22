#include <bits/stdc++.h>

using namespace std;

int main() {
    int var=5;
    int *pointvar;
    
    //store add of var
    pointvar=&var;
    
    //print var
    cout<<"var= "<<var<<endl;
    
    //print *pointvar
    
    cout<<"*pointvar = "<<*pointvar<<endl;
  //change value of var to 7
  
   cout<<"changing var to 7"<<endl;
   
  var = 7;
  
  //printing var again
  cout<<"var = "<<var<<endl;
  
  //print *pointvar
  
  cout<<"pointvar is = "<<*pointvar<<endl<<endl;
  
    //change value of pointvar to 16
    
    *pointvar = 16;
    
    //print var
    
    cout<<" var = "<<var<<endl;
    
    //print point var
    
    cout<<"*pointvar = "<<*pointvar<<endl;
    return 0;
    
}
