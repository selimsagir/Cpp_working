
#include <iostream>
#include <string>       

class Entity
{
public:
    Entity()
    {
        std::cout << "created Entity";
    }
    ~Entity()
    {
        std::cout << "Entity is destroyed";
    }
};

int* CreateArray()
{
    int array[50];   // not legit not allocated in heap even tough pointer
    // it will be clear after quit scope
    
    int* array = new int[50];  // on heap
    return array;
}

class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        :m_Ptr(ptr)
    {
    }
    ~ScopedPtr()
    {
        delete m_Ptr;
    }

};

int main()
{
    {
        ScopedPtr e = new Entity(); // this will be deleted when 
        // it goes out of scope even tough we use NEW keyword
        //Entity e; // deconstructor will be destroyed  - stack
        Entity* e = new Entity(); // only constructor   -heap  // it will be not deleted
    }

    std::cout << "Hello World!\n";
}

