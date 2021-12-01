#include <bits/stdc++.h>

using namespace std;

class animal{
public:
void walk(){
    cout<<"hello"<<endl;
}
};
class tiger : virtual public animal{
    
};
class lion : virtual public animal{
                                             //virtual inheritance to solve diamond problems
};
class zoo : public tiger , public lion{
    public:
};

int main() {
    zoo object;
    object.walk();
}
