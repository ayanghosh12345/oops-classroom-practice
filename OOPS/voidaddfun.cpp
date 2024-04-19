#include<iostream>
using namespace std;
class addition
{
    public: 
    void add (int a ,int b)
    {
        // int c= a+b;
        cout<<"addition between a&b: ="<<a+b;
    }
};
int main()
{
    addition obj;
    int a;
    int b;
    cout<<"enter the value of a&b: =";
    cin>>a>>b;
    obj.add(a,b);
}
    
