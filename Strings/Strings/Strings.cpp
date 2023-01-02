#include <iostream>


class NEC
{
public:
    static int x;
    static int foo()
    {
        return 2;
    }
};
int foo()
{
    return 1;
}

int NEC::x = foo();

int main()
{
    std::cout << NEC::foo();
}