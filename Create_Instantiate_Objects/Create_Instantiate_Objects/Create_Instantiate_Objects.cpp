
#include <iostream>

using String =  std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unkownn") {}
    Entity(const String& name) :m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

//void Function()
//{
//    int a = 2;
//    Entity entity = Entity("Cherno");
//}

int main()
{
    Entity* e;   
    {    // heap allocation with new keyword and returns pointer
        // needs to be FREE ed
        Entity* entity = new Entity("Cherno");
        e = entity;
        std::cout << entity->GetName(); // with default constractor
        //delete entity;
    }
    delete e;



    //Entity* e;   // stack allocation so whenever we came end of function we lost our Entity members
    //{
    //    Entity entity("Cherno");
    //    e = &entity;
    //    std::cout << entity.GetName(); // with default constractor
    //}
    //Entity entity;  // stack
    

 
}
