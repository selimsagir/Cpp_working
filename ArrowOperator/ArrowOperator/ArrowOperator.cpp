// ArrowOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Entity
{
public:
    int x;
public:
    void Print() const { std::cout << "Hellow!" << std::endl; }
};

class ScopePtr
{
private:
    Entity* m_obj;
public:
    ScopePtr(Entity* entity)
        :m_obj(entity)
    {

    }
    ~ScopePtr() {
        delete m_obj;
    }
    Entity* operator->()
    {
        return m_obj;
    }
};

int main()
{
    ScopePtr entity = new Entity();
    entity->Print();
    
    //Entity e;
    //e.Print();

    //Entity* ptr = &e;
    //ptr->Print();
    
    std::cout << "Hello World!\n";
}

