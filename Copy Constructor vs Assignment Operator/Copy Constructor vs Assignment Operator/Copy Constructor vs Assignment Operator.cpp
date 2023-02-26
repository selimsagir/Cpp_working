
#include <iostream>
#include <stdio.h>

class Test
{
public:
    Test() {
        std::cout << "Constructor called" << std::endl;
    };
    Test(const Test& t)
    {
        std::cout << "Copy constructor called" << std::endl;
    }
    Test& operator=(const Test& t)
    {
        std::cout << "Assignment operator called" << std::endl;
        return *this;

    }

private:

};



int main()
{
    Test t1, t2;
    t2 = t1;
    Test t3 = t1;


    std::cout << "Hello World!\n";
}

