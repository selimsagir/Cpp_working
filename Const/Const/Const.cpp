

#include <iostream>


class Entity
{
private:
    int m_X, m_Y;
public:
    int getX() const // bu method class uyesini degistiremez demek
    {                   //sadece class ile kullanilir
        m_X = 2; // not valid
        return m_X;
    }
    void setX(int x)  // bu method class uyesini degistiremez demek
    {                   //sadece class ile kullanilir
        m_X = x; // not valid

    }
};

class Entity2
{
private:
    int* m_X, m_Y;   //m_X pointer ama m_Y degil asteriks yok!!!
public:
    const int* const getX() const // pointer degiskeni ve addresi korumak icin?
    {                   //sadece class ile kullanilir
        
        return m_X;
    }
    void setX(int x)  // bu method class uyesini degistiremez demek
    {                   //sadece class ile kullanilir
        m_X = x; // not valid

    }
};





int main()
{
    Entity e;


    const int MAX_AGE = 90;

    const int* a = new int;  // heap  pointerin gosterdigi yerdeki datayi degistiremem
    int*  const a = new int;  // const un nerde olduguna gore islev farkli
                              //bunda content degistirilebilir

    *a = 2; // ok ilk tanimlama icin
     a = (int*)&MAX_AGE; // tricking the const keyword

    std::cout << "Hello World!\n";
}

