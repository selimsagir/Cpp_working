/*
Kullanýcýdan bugünün tarihini ve doðum tarihini isteyen ve kaç yýl, kaç ay, kaç gündür
hayatta olduðunu ekrana yazan programý oluþturalým.
1 ay = 30 gün
*/

#include <iostream>

using namespace std;

struct tarih{
    int gun,ay,yil;
};
struct tarih yas(struct tarih, struct tarih);   /*Tarih türünde nesne döndüren fonk.*/
int main()
{
    struct tarih bugun,dogum,sonuc;

    cout << "Bugunun tarihini girin(gun,ay,yil):" << endl;
    cin >> bugun.gun>>bugun.ay>>bugun.yil;   //bilgiler alindi

    cout << "Dogum tarihini girin(gun,ay,yil) : " << endl;
    cin >> dogum.gun>>dogum.ay>>dogum.yil;
    sonuc = yas(bugun,dogum);

    cout << sonuc.yil << " yil "<<sonuc.ay <<" ay "<<sonuc.gun<<"dur hayattasýn.";
    return 0;
}

struct tarih yas(struct tarih x, struct tarih y)
{
    struct tarih sonuc={0,0,0}; //sonuc nesnesinin tum elemanlarý 0
    if(x.gun<y.gun){
        x.ay-=1;
        sonuc.gun = 30+x.gun-y.gun;
    }
    else
        sonuc.gun = x.gun-y.gun;
    if(x.ay < y.ay){
        x.yil-= 1;
        sonuc.ay+= 12+x.ay - y.ay;
    }
    else
        sonuc.ay+= x.ay - y.ay;
    sonuc.yil+= x.yil - y.yil;
    return sonuc;

}
