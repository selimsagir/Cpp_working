
#include <iostream>


class Entity
{
private:
    m_Name;
public:
    Entity() : m_Name("unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name'' }

};



int main()
{
    int a = 2;
    int* b = new int;  // allocated in heap
    int* c = new int[50]; // 200 bytes
    
    Entity* e = new Entity(); // allocate and call !!constructor!!! malloc only allocate memory
    
    delete e;  // also calls destructor along with free()

    delete[] c;  // square brackets for arrays


}

