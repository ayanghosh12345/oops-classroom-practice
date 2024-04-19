#include<iostream>
using  namespace std;
class testing
{

public:
int a,b;
int setvalue(int x,int y)
{
    int c;
    c=x+y;
    return (c);
}


};
int main()
{
    int p;
    testing myobj;
    p=myobj.setvalue(10,24);
    
   cout<< p;
    return 0;
}