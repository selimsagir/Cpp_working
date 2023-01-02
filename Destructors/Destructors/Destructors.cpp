
#include <iostream>

class Entity
{
public:
    float x, y;

    // bunun yerine constructor kullaniriz :
    Entity()
    {
        x = 0;
        y = 0;
        std::cout <<  " Created Entity... " << y << std::endl;
    }

    ~Entity()
    {
        std::cout << " Destroyed Entity... " << y << std::endl;
    }

    void Print()
    {
        std::cout << x << " , " << y << std::endl;
    }
};

void Function()
{
    Entity e;
    e.Print();
}

void Function2()
{
    Entity e;
    e.Print();
}


int main()
{
    Function();
    Function2();

}

