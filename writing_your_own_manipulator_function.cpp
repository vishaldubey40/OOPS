#include <iostream>
#include<iomanip>
using namespace std;

  ostream &out(ostream &output){
      cout<<"hey cool man --> ";
      return output;
  }
  istream &getname(istream &input){
      cout<<"Please enter your  name :";
      return input;
  }
int main() {
  string name;
  cin>>getname>>name;
  cout<<out<<name;
  return 0;
}
