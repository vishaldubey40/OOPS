using namespace std;
class School
{ public:
  int n;
  string s;
    
};
class District : public School
{public:
    void getdata();
    void display();
};
void District :: getdata()
{
        cin>>n>>s;
    
}
void District :: display()
{
    cout<<"Student Name is: "<<s<<"\nStudent Roll no is: "<<n;
}
int main()
{District obj;
District *ptr;
ptr = &obj;
ptr -> getdata();
ptr -> display();


	return 0;
}
