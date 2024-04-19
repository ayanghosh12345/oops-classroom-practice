#include<iostream>
using namespace std;
class x
{
    public:
    int r,m;
    void display()
    {
        cout<<"welcome";
    }
};
int main()
{
     x obj;
     obj.r=1;
     obj.m=75;
     cout<<"R="<<obj.r<<endl;
     cout<<"M="<<obj.m<<endl;
     obj.display();
     return 0;
}

