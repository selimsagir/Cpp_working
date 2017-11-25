#include <iostream>

using namespace std;

int main()
{
    int i = 5;   /* i deðiþkeni bellekte 5 verisini tutar*/
    int *ptr;
    ptr = &i;   /* ptr bellekte 5 verisinin tutuldugu adresi tutar   */
    cout << "i'nin adresi : " << &i << endl << "ptr degiskeninin degeri : " << ptr ; cout << endl;
    cout <<"i'nin degeri : " << i << endl << "*ptr'nin degeri : "<< *ptr << endl;

    return 0;
}
