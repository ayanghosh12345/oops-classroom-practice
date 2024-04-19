#include<iostream>
using namespace std;
int sum(int a,int b,int c=4,int d=5)
{
    return(a+b+c+d);
}
int main()
{
    cout<<"sum of 1,2,3,4 is :"<< sum(1,2,3,4)<<endl;
    cout<<"sum of 1,2 is :"<<sum(1,2);
}