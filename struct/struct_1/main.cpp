#include <cstdlib>
#include <iostream>

using namespace std;

struct calisan{
       char *ad , *soyad;
       int yas;       
};

int main(){
    calisan x; //bunu üstte struct yapýsýnda noktalý virgülden sonra yazabilirdik
    x.ad = "Muhammed";
    x.soyad = "MASTAR";
    x.yas = 22;
    
    cout << "Calisan adi : " << x.ad << endl;
    cout << "Calisan soyadý : " << x.soyad <<endl;
    cout << "Calisan yasi : " << x.yas << endl;
     
    system("PAUSE");
    return 0;

}
