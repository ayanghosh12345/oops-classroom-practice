#include<iostream>
using namespace std;
 class A
 {
    public:
      int roll, marks;
      void display()
      {
        cout<< "welcome";
      }
 };
      int main()
      {
        A obj;
        obj.roll;
        obj.marks;
        cout<<"ROLL"<<endl;
        cin>>obj.roll;
        cout<<"MARKS="<< endl;
        cin>>obj.marks;
        obj.display();
        return 0;
      }
 