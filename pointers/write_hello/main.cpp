#include <iostream>

using namespace std;

int main()
{
    const char *p = "Hello";
    while(*p)
        // printf("%c",*p++);//Increment the pointer here
         cout<<*p++;
    return 0;
}
