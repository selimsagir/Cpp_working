// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Nec {
private:
    class Nested {};
    int x, y;
public:
    Nec()
        :x(10),y(5) {}
    void print()
    {
        std::cout << x;
    }
    static Nested foo() { return Nested{}; };
};

int main()
{   
    //auto n = Nec{};
    //auto f = n.foo();
    //Nec.print();
    Nec object1;
    object1.print();

}
