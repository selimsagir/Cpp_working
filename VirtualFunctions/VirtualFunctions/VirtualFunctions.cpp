
#include <iostream>
#include <string>


class Entity
{
public:
    
    virtual std::string GetName()
    {
        return "Entity";
    }



};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
    std::string GetName()
    {
        return m_Name;
    }
};

void PrintName(Entity* a)
{

    std::cout << a->GetName() << std::endl;
}

int main()
{
    //Entity* e = new Entity();
    //std::cout << e->GetName() << std::endl;

    //Player* p = new Player("Selim");
    //std::cout << p->GetName() << std::endl;
    

    Entity* e = new Entity();   // ikisindede yine entity yaziyor ! virtual or override kullan!
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);



    
}

