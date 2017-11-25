/** \brief  Dikdörtgen adında bir sınıf oluşturuldu. Sınıfın içerisine public olarak
 *  kisa_kenar ve uzun_kenar adında iki tane tamsayı değişkeni ve yine tamsayı alan(),
 *  cevre() fonk tanımladık. Nesne olarak ise x ifadesini yazdık.Ek olarak; sınıfın
 *  sonunda "x" nesnesini tanımlamasak bile main() içerisinde sınıf adı ve nesne
 *  ikilisini tanımlayabiliriz: dikdortgen x;
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
