 

#include <iostream>


class Entity
{
public:
    float X, Y;

    void move(float xa, float ya
    {
        X = X + xa;
        Y = Y + ya;
    }

};

class Player : public Entity  // inheritance boyle yapiliyor player entity de olan herseye sahip
{
public:
    const char* name;
    
    void PrintName()
    {
        std::cout << name << std::endl;
    }

};


int main()
{
    Player player;
    player.move(5, 5);
    player.X = 100;
    std::cout << "Hello World!\n";
}

