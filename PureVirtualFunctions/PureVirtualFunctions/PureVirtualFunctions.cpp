
#include <iostream>
#include <string>


class Printable
{
public:
    virtual std::string GetClassName() = 0;
};


class Entity : public Printable
{
public:

    //virtual std::string GetName() = 0; // 0 makes it PURE VIRTUAL FUNC 
    virtual std::string GetName() { return "Entity"; }
    virtual std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
    std::string GetName() override
    {
        return m_Name;
    }

    virtual std::string GetClassName() override { return "Player"; }


};

class Selim : public Printable
{
    std::string GetClassName() override { return "Selim"; }
};


void PrintName(Entity* a)
{

    std::cout << a->GetName() << std::endl;
}

void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;

}


int main()
{
    //Entity* e = new Entity();
    //std::cout << e->GetName() << std::endl;

    //Player* p = new Player("Selim");
    //std::cout << p->GetName() << std::endl;


    Entity* e = new Entity();  
    //PrintName(e);

    Player* p = new Player("Cherno");
    //PrintName(p);

    Selim* sel = new Selim();

    Print(e);
    Print(p);
    Print(sel);

}

