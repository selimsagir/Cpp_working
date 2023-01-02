/*
c++'ta kulland���m�z veri t�rleri farkl� adlar verilebilir.
�rne�in : int t�r� yerine tamsay� diyerek tan�mlama yapmak m�mk�nd�r.
typedef int tamsayi;
typedef char karakter;
typedef char *g�sterici;
Bu tan�mlamalardan sonra;

tamsayi sayi1, sayi2, sayi3;   //int t�r�nde 3 adet de�i�ken tan�mland�
karakter kar = 'a';            // char kar = 'a';
gosterici ad,soyad;            // char *ad,*soyad;

Struct olarak typedef kullan�m�;
typedef struct otomobil{
    char *marka;
    int fiyat;
}o;
o araba1;   //otomobil t�r�nde bir nesne olu�turuldu.
*/


#include <iostream>

using namespace std;

typedef struct calisan{
    char *ad,*soyad,*gorevi;
    int calisanno;
}eleman;

int main()
{
    eleman a[]={"Suha", "Eris", "Programci" , 1 ,"Muhammed","Mastar",
    "Programci",2,"Tahir","Vural","Programci",3};
    cout << "Calisanlar listesi" << endl;
    cout << "AD:, SOYAD:, GOREVI:, NO:" << endl;
    for(int i = 0; i < 3; i++)
        cout <<a[i].ad<<" "<<a[i].soyad<<" "<<a[i].gorevi<<" "<<a[i].calisanno<<endl;
}
