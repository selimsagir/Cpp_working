/** \brief  Dikd�rtgen ad�nda bir s�n�f olu�turuldu. S�n�f�n i�erisine public olarak
 *  kisa_kenar ve uzun_kenar ad�nda iki tane tamsay� de�i�keni ve yine tamsay� alan(),
 *  cevre() fonk tan�mlad�k. Nesne olarak ise x ifadesini yazd�k.Ek olarak; s�n�f�n
 *  sonunda "x" nesnesini tan�mlamasak bile main() i�erisinde s�n�f ad� ve nesne
 *  ikilisini tan�mlayabiliriz: dikdortgen x;
 * \param
 * \param
 * \return
 *
 */


#include <iostream>

using namespace std;

class dikdortgen{
public:
    int kisa_kenar;
    int uzun_kenar;

    int alan() {
    return kisa_kenar * uzun_kenar;
    }
    int cevre() {
    return 2*(kisa_kenar + uzun_kenar);
    }
};x;

int main()
{
    /*dikdortgen x;
    */
    cout << "Kisa kenari giriniz : ";
    cin >> x.kisa_kenar;
    cout << "Uzun kenari giriniz : ";
    cin >> x.uzun_kenar;

    cout << "Diktorgenin alani : " << x.alan() << endl;
    cout << "Diktortgenin cevresi : " << x.cevre() << endl;
    cout << endl;
    return 0;
}
