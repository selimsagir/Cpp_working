// LocalStatic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//class Singleton
//{
//private:
//    static Singleton* s_Instance;
//public:
//    static Singleton& Get() { return *s_Instance; }
//    
//    void Hello() {}
// 
//};
//
//Singleton* Singleton::s_Instance = nullptr;

class Singleton
{

public:
    static Singleton& Get() { 
        static Singleton instance;
        return instance; 
    }

    void Hello() {}

};


int main()
{
    Singleton::Get().Hello();
    std::cout << "Hello World!\n";
}

