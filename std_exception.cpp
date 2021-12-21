#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int x=10;
    int y=0;
  int z;
   try{
 if(y==0)
 throw runtime_error(){"X is divided by zero:"};

    z=x/y;
     cout << z;




}catch(runtime_error &e){
cout<<"Exception has occured"<<endl;
cout<<error.what();
}
return 0;
}
