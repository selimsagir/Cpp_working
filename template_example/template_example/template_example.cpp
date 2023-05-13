 
#include <iostream>
#include "library.h"

using namespace std;


int main()
{
    ClassTemplate<int, double> obj1(1, 2.2, 'c');
    cout << "obj1 values" << endl;
    obj1.printVar();

    ClassTemplate < double, char, bool> obj2(3.3, 's', false);
    cout << "obj2 values" << endl;
    obj2.printVar();
    return 0;
}

 