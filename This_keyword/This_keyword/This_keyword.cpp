
#include <iostream>

void PrintEntity(const Entity& e);

class Entity
{
public:
    int x,y;
    Entity(int x, int y)
    {
        //x = x;  // sorun burdan basliyor
        //Entity* const e = this;

        this->x = x;
        this->y = y;

        PrintEntity(*this);
    }
    int GetX() const
    {
        //const Entity* e = this;
        
    }
}

void PrintEntity(const Entity& e)
{

}

int main()
{
    std::cout << "Hello World!\n";
}

