// SmartPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <memory>

// cannot copy unique pointer

class Entity {
public:
    Entity()
    {
        std::cout << " Created entity";
    }
    ~Entity()
    {
        std::cout << " Deleted entity";
    }

    void Printfunc() {};
};


int main()
{

    {   std::shared_ptr <Entity> e0;
        {
        std::shared_ptr<Entity> SharedEntity = std::make_shared<Entity>();
        e0 = SharedEntity;
        }
    }    // class burdan sonra yok olacak 






    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        //std::unique_ptr<Entity> e0 =entity // error
        entity->Printfunc();  // entity will be destroyed - smart pointer    
    }

    std::cout << "Hello World!\n";
}
