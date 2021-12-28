#include <iostream>

using namespace std;
template <typename T>
void display(T a){
    cout<<" You have passes "<<a<<endl;
}

int main() {
    display(10);
    display(46.97);
    display("My name is vishal dubey");
}
