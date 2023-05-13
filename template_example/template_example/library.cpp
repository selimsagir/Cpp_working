#include "library.h"
#include <iostream>

using namespace std;

template <class T, class U, class V>
ClassTemplate<T, U, V>::ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

template <class T, class U, class V>
void ClassTemplate<T, U, V>::printVar() {
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "var3 = " << var3 << endl;
}
