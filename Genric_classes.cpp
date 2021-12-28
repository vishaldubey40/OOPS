#include <iostream>

using namespace std;
template<class T>
class my{
    T x;
    T y;
    public:
    my(T a,T b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"first one is " << x <<" and second one is "<< y<<endl;
    }
};
int main() {
    my<char> obj('a','n');
    obj.display();
        my<int> obj1(89,898);
obj1.display();
my<string> obj2("hello","hi ");

    obj2.display();
}
