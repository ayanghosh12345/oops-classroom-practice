#include<iostream>
using namespace std;
class shapes
{
    public:
    void areaofrect(int l,int b)
    {
    int c=  l*b;
    cout<<"area of rect : = "<<c;
    }
float areaofcircle(float r)
{
    float a=3.14*r*r;
    return (a);
}
int volume(int l,int b, int h)
{
int v= l*b*h;
return(v);
}

};
int main()
{
  shapes myobj;
  float a;
  int v;
  float r;
  int l,b,h;
cout<<"enter the radius";
cin>>r;

  a=myobj.areaofcircle(r);
  cout<<"circle area="<<a<< endl;
  cout<<"enter the value of l, b,&h :" ;
  cin>> l>>b>>h;
  v=myobj.volume(l,b,h);
  cout<<"box volume="<<v<<endl;
  cout<<"enter the value of rectangle : ";
  cin>>l>>b;
    myobj.areaofrect(l,b);

}