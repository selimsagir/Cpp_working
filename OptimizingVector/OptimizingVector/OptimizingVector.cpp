// OptimizingVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>


struct Vertex {
    float x, y, z;
    Vertex(float x, float y, float z)
        :x(x), y(y), z(z)
    {
    
    }
    Vertex(const Vertex& vertex)
        :x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied" << std::endl;
    }
};

int main()
{
    std::vector<Vertex> vertices;
    vertices.reserve(3);  // for resize the vector // now three copies instead of 6 
    vertices.push_back(Vertex(1, 2, 3)); // bunda vertex yine kopyalaniyor
    vertices.emplace_back(1, 2, 3); // daha optimize
    vertices.push_back(Vertex(4, 5, 6));
    vertices.push_back(Vertex(7, 8, 9));

    std::cout << "Hello World!\n";
}

