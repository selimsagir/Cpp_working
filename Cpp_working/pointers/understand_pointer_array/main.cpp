// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int numbers[5];
  int * p;

  p = numbers;  *p = 10;
    cout<<p<<endl;
  p++;  *p = 20;
    cout<<p<<endl;
  p = &numbers[2];  *p = 30;
    cout<<p<<endl;
  p = numbers + 3;  *p = 40;
    cout<<p<<endl;
  p = numbers;  *(p+4) = 50;
    cout<<(p+4)<<endl;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;
}
