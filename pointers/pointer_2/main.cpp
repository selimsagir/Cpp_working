#include <iostream>
/*
    Klavyeden girilen sayýnýn bellekte hangi adrese yerlestigini ekrana gosteren program
*/
using namespace std;

int main()
{
    int a, *aptr;
    cout << "Bir sayi girin : ";
    cin >> a;
    aptr = & a;
    cout << endl;
    cout << *aptr <<" sayisi bellekte " << aptr << "  adresine yerlesti.";
    cout << endl;
    return 0;
}
