
#include <iostream>
#include <string>



// Default visibility of a class is PRIVATE unless you put public keyword.

// Protected keywotd ensure class and subclasses can access the variable or function 
//was defined this scope but NOT from the MAIN
class Entity
{
protected:
    int X, Y;
    void Print(){}

public:
    Entity()
    {
        X = 0;
        Print();
    }

};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;  // visible
        Print(); // visinle

    }
};


int main()
{
    
    Entity e;
    e.Print(); // not visible even  with the protected
    e.X = 5;  // same with above


}

