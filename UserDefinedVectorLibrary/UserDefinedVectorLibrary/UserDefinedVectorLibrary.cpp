// UserDefinedVectorLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "selim_array.h"
#include "selim_vector.h"



struct Vector3 {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    int* m_MemoryBlock = nullptr;

    Vector3() { m_MemoryBlock = new int[5]; }
    Vector3(float scalar)
        : x(scalar), y(scalar), z(scalar) {
        m_MemoryBlock = new int[5];

    }
    Vector3(float x, float y, float z)
        :x(x),y(y), z(z) {
        m_MemoryBlock = new int[5];
    }
    Vector3(const Vector3& other) = delete;
    //    : x(other.x), y(other.y), z(other.z)
    //{
    //    std::cout << "Copied!\n";
    //}
    Vector3(Vector3&& other)
        : x(other.x), y(other.y), z(other.z)
    {   
        m_MemoryBlock = other.m_MemoryBlock;
        other.m_MemoryBlock = nullptr;
        std::cout << "Moved!\n";
    }

    ~Vector3 ()
    {
        std::cout << "Destroyed!\n";
        delete[] m_MemoryBlock;
    }

    Vector3& operator=(const Vector3& other) = delete;
    //{
    //    std::cout << "Copy\n";
    //    x = other.x;
    //    y = other.y;
    //    z = other.z;
    //    return *this;
    //}
    Vector3& operator=(Vector3&& other)
    {
        m_MemoryBlock = other.m_MemoryBlock;
        other.m_MemoryBlock = nullptr;
        std::cout << "Move\n";
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }


};

template<typename T>
void PrintVector(const Vector<T>& vector) {
    for (size_t i = 0; i < vector.Size(); i++)
    {

        std::cout << vector[i] << std::endl;
    }
    std::cout << "..................\n";
}
template<>
void PrintVector(const Vector<Vector3>& vector) {
    for (size_t i = 0; i < vector.Size(); i++)
    {
        std::cout << vector[i].x << " ," 
            << vector[i].y << " ," << vector[i].z << std::endl;
    }
    std::cout << "..................\n";
}

int main()
{
    Array<std::string, 2> data;
    data[0] = " Ilk data";
    data[1] = " ikinci data";
    {
        Vector<Vector3> vector0;

        vector0.EmplaceBack(1.0f);
        vector0.EmplaceBack(2, 3, 4);
        vector0.EmplaceBack(1, 4, 7);
        vector0.EmplaceBack();
        PrintVector(vector0);
        vector0.PopBack();
        vector0.PopBack();
        PrintVector(vector0);
        vector0.EmplaceBack(22, 33, 11);
        vector0.EmplaceBack(123, 23, 13);
        PrintVector(vector0);
        vector0.Clear();
        vector0.EmplaceBack(22, 33, 11);
        vector0.EmplaceBack(123, 23, 13);
  
        PrintVector(vector0);
    }
    //vector0.PushBack(Vector3(1.0f));
    //vector0.PushBack(Vector3(2,3,4));
    //vector0.PushBack(Vector3());

    Vector<std::string> vector;
    vector.PushBack("Selim");
    vector.PushBack("TS");
    vector.PushBack("Sampiyon");

    PrintVector(vector);


    //std::cout << "Hello World!\n";
}

