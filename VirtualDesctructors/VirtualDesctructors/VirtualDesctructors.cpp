#include <iostream>


class Base
{
public:
    Base() {
        std::cout << "Base constructor\n";
    }
    virtual ~Base() {
        std::cout << "Base Destructor\n";

    }
};

class Derived : public Base
{
public:
    Derived() {
        m_array = new int[5];
        std::cout << "Derived constructor\n";
    }
    ~Derived() {
        std::cout << "Derived Destructor\n";
        delete[] m_array; // memory leak, never being called in3. scenario
        // which is WITHOUT virtual keyword in the Base class.
    /*  Base constructor
        Derived constructor
        Base Destructor
    */
    } 
private:
    int* m_array;
};


int main()
{
    Base* base = new Base();
    delete base;
    std::cout << "---------\n";

    Derived* derived = new Derived();
    delete derived;

    std::cout << "---------\n"; 
    Base* poly = new Derived();
    delete poly;  // memory leak



}

