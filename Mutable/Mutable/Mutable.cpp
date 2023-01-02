

#include <iostream>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCounter = 0;
public:
    const std::string& GetName() const
    { 
        m_DebugCounter++;   // sag const yuzuunden sorun o sebeple mutable
        return m_Name;
    }
};

int main()
{
    const Entity e;
    e.GetName();    // satir 10 sag const sagliyor 



    std::cout << "Hello World!\n";
}
