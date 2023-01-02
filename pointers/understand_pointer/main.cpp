// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  cout<<"adress of firstvalue : "<<p1<<endl;
  p2 = &secondvalue; // p2 = address of secondvalue
  cout<<"adress of secondvalue : "<<p2<<endl;
  *p1 = 10;          // value pointed to by p1 = 10
  cout<<" p1: "<<p1<<endl;
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  cout<<"*p2  : "<<*p2<<endl;
  cout<<"p2 : "<<p2<<endl;
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  cout<<" p1 = p2 : "<<p1<<endl;
  *p1 = 20;          // value pointed to by p1 = 20
  cout<<" p1 : "<<p1<<endl;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
