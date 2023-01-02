

#include <iostream>


class Entity
{
private:
    int m_X, m_Y;
    mutable int var;  
public:
    int getX() const // bu const sildigimde PrintEntity e.getX() hata verir 
        //cunku class icinin degismeyecegi garanti degil. 
        //cunku & kullandim??
    {
        var = 2;  // Okay cunku MUTABLE keyword ile tanimlanmis           
        return m_X;
    }
    int getX() // ayni fonk const olmayan versiyonu 
        //ama  PrintEntity e.getX() const olani kullanacak
        //bu sekil bir tarz var
    {
        return m_X;
    }
    void setX(int x)  
    {                   
        m_X = x; 

    }
};

void PrintEntity(const Entity& e)  // I am not copying with &, pointer ile 
//olsa content degistiremem
{
    std::cout << e.getX();
}


int main()
{
    Entity e;


    const int MAX_AGE = 90;

    const int* a = new int;  // heap  pointerin gosterdigi yerdeki datayi degistiremem
    int* const a = new int;  // const un nerde olduguna gore islev farkli
    //bunda content degistirilebilir

    *a = 2; // ok ilk tanimlama icin
    a = (int*)&MAX_AGE; // tricking the const keyword

    std::cout << "Hello World!\n";
}

