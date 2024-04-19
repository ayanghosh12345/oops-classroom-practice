#include<iostream>
using namespace std;
class sum
{
int a,b,c;
public:
void getdata()
{
    cout<<"enter the value of a&b:"
    cin>> a>>b;
}
void putdata()
{
    c=a+b;
    cout<<"addition of :"<<a<<"and"<<b<<"="<<c;
}
};
int main()
{
    sum myobj;
    myobj.getdata();
    myobj.putdata();
    
    return 0;
}