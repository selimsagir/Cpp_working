

#include <iostream>


class Entity {
public:
    static int count;
    Entity() {
        count++;
    }
};

int Entity::count = 0;

int main()
{

    Entity a;
    Entity b[10];

    std::cout << a.count << std::endl;

    Entity *c = new Entity;
    std::cout << Entity::count << std::endl;
    delete c;
    return 0;
}

