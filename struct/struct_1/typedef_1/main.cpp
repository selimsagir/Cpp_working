/*
c++'ta kullandýðýmýz veri türleri farklý adlar verilebilir.
Örneðin : int türü yerine tamsayý diyerek tanýmlama yapmak mümkündür.
typedef int tamsayi;
typedef char karakter;
typedef char *gösterici;
Bu tanýmlamalardan sonra;

tamsayi sayi1, sayi2, sayi3;   //int türünde 3 adet deðiþken tanýmlandý
karakter kar = 'a';            // char kar = 'a';
gosterici ad,soyad;            // char *ad,*soyad;

Struct olarak typedef kullanýmý;
typedef struct otomobil{
    char *marka;
    int fiyat;
}o;
o araba1;   //otomobil türünde bir nesne oluþturuldu.
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
