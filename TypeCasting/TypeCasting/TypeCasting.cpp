#include <iostream>




int main()
{

    double a = 5.25;
    double b = (int)a + 5.3;

    double c = static_cast<int>(a) + 5.3;
    //dynamic_cast useful for check class base and derived 

    std::cout << "Hello World!\n";
}

