#include <iostream>
#include<sstream>
using namespace std;

int main() {
    //number to string
    int data;
    cin>>data;
    
    stringstream sso;
    sso <<data;
    string st;
    sso>>st;
    cout<<"the integer part of number is: "<<data;
    cout<<"\n string in number is: "<<st<<endl;
    //string too number
    string s="87";
  stringstream ss;
  ss << s;
  int kl;
  ss >>kl;
    cout<<"string value is: "<<s<<endl;
    cout<<"integer value of a string variable is: "<<kl;
}
