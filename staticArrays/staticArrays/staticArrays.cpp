#include <iostream>
#include <array>

void printArray(const std::array<int, 5>& myArray)
{
    std::cout << "first element is: "<< myArray[0] <<std::endl;
}

int main()
{
    std::array<int, 5> data;
    auto x = data.begin();
    data[0] = 1;
    data[4] = 10;

    printArray(data);
    
    data[0] = 1;
    data[4] = 10;

    std::cout << *x ;
}

