#include<iostream>
using namespace std;
class A
{
    public:
    int add(int a,int b)
    {
        int c;
    c= a+b;
    return(c);
    }
};
int main()
{
    A x;
int p;
p=x.add(10,20);
cout<<"addition is: "<<p;
return 0;
}