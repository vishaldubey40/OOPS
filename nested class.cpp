#include <bits/stdc++.h>

using namespace std;
class person{
    public:
    string name;
    class address{
        public:
        string country;
        string stname;
        int hno;
    };
    address addr;
    void addressplease()
    {
        cout<<name<<endl<<addr.country<<endl<<addr.stname<<endl<<addr.hno<<endl;
    }
};

int main() {
//person :: address ad;
person anil;
anil.name="anil";
anil.addr.country="India";
anil.addr.stname="vishal";
anil.addr.hno=24;
anil.addressplease();
}
