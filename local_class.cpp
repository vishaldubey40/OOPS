#include <bits/stdc++.h>

using namespace std;

void studentlist();

int main() {
studentlist();
return 0;
}

void studentlist(){
    class student{
        public:
        string name;
        int rno;
        int class1;
        
        void display(){
            cout<<name<<endl<<rno<<endl<<class1;
        }
        
    };
    student vishal;
    vishal.name="Vishal Dubey";
    vishal.rno=34;
    vishal.class1=5;
    vishal.display();
}
