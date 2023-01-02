
#include <iostream>
#include <array>

class Entity
{
public:
    int* example = new int[5];  // bunun sizei bilmek imkansiz ileride kullanmak icin 
    // c++11 array ozelligi kullanilabilir:
    std::array< int, 5> MyArray;



    Entity()
    {
        for (int i = 0; i < 5; i++)
        {
            example[i] = 2;
        }

        for (int i = 0; i < MyArray.size() ; i++)
        {

        }
    }

};


int main()
{

    Entity e;


    // define an array
    //int example[5];  // created in stack
    //for (int i = 0; i < 5; i++)
    //{
    //    example[i] = 2;
    //}
    //
    // both same
    //int* another = new int[5]; // created in HEAP
    //for (int i = 0; i < 5; i++)
    //{
    //    another[i] = 2;
    //}

    
    
    std::cin.get();

}

