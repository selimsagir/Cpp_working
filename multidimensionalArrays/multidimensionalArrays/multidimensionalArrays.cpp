#include <iostream>




int main()
{


    int** a2d = new int*[50];  // pointers to show each columns
    
    for (int i = 0; i < 50; i++)
    {
        a2d[i] = new int[50];
    }
    
    a2d[0][0] = 0;

    for (int i = 0; i < 50; i++)
    {
        delete[]  a2d[i];
    }
    delete[] a2d;

    std::cout << "Hello World!\n";
    
}

