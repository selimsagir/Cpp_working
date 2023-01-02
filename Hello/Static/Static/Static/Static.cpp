
#include <iostream>


struct Entity
{
    static int x, y;   // like global
    void print()  // static printf()  bu sanki global gibi olur ve eger x,y stattk degil nornal olsa
        // bunlara ulasamaz cunku global bir fonksiyon gibi davranir. cunku entitye ulasamaz.(python self mantigi?)
    {
        std::cout << x << "," << y << std::endl;

    }
};

int Entity::x;
int Entity::y;


int main()
{
    Entity e;
    e.x = 5; // Entity::x; Entity::y;
    e.y = 10;
    
    Entity e1;
    e1.x = 6;  // Entity::x; Entity::y;
    e1.y = 7;
    e1.print();
    e.print();

    

}
