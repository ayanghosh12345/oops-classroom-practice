#include <iostream>
using namespace std;
class calculation
{
    public:
void add(float a, float b)
{
    cout<<"enter the value of a $ b :";
    cin>>a>>b;
    cout<<"addition :"<<a+b <<endl;
}
int square(int c )
{
    return(c*c);
}
float cube(float d)
{
    return(d*d*d);
}
};
int main()
{
    float a,b,d;
    int c,x,y;
    calculation number;
   number.add(a,b);
   cout<<"enter  values :";
   cin>>c;
   x=number.square(c);
   cout<<"square:"<<x<<endl;
   cout<<"enter  value:";
   cin>>d;
   y= number.cube(d);
   cout<<"cube:"<<y;
}