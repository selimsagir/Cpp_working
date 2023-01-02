
#include <iostream>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		:m_Name(name), m_Age(-1) {}  // -1 demek age not will supplied
	Entity(int age)
		:m_Name("Unkown"), m_Age(age) {}
};


void PrintEntity(const Entity& entity)
{
	//Printing
}

int main()
{
	PrintEntity(22);
	PrintEntity("Selim");  // std::string olmali ama Selim bir char
	PrintEntity(Entity("Selim"));  // this works because conversion var implicit

	Entity a("Selim");  // Entity a = ("Selim");
	Entity b(22);       //  Entity b = 22;


	
	
	std::cout << "Hello World!\n";
}

