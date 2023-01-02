
#include <iostream>

class Entity
{
public:
    float x, y;

    // x ve y random olarak atandi yani address te ne varsa o an
    // o sebeple sanki her seferinde bir init yapar gibi constructor kullaniriz yani bunun
    //yerine:
    // bunu her seferinde yani her seferinde yeni entity olustudugumuzda
    // cagirmak gerekir ki her seferinde x ve yyi sifirlayabilelim.
    // Entity e;
    // Entity e1;
    // e.Init();
    // e1.Init();
    void Init()
    {   
        x = 0.0f;
        y = 0.0f;
    }
    // bunun yerine constructor kullaniriz :
    Entity()
    {
        x = 0.0f;
        y = 0.0f;
    }
    // Constructora parametre vererek init degiskenlerini mainden define edebiliriz.
    // soyleki:
    //..  Entity(float x, float y)
    //..  {
    //..        x = x;
    //..        y = y;
    //..  }
    //bunu mainden cagirmak icin:
    //..   Entity e(10.0f, 5.0f);
    void Print()
    {
        std::cout << x << " , " << y << std::endl;
    }
};



int main()
{
    Entity e;
    e.Print();

}

