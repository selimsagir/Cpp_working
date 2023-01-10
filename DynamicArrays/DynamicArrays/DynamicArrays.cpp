#include <iostream>
#include <vector>

// isimlendirme biraz yaniltici aslinda esnek array, matematiksel vektorle alakasi yok

struct Vertex
{
    float x, y, z;

};

std::ostream& operator << (std::ostream & stream, const Vertex& vertex)
{
    stream << vertex.x << "," << vertex.y << ", " << vertex.z;
    return stream;
}

void Function(const std::vector<Vertex>& vertices)
{
    // not copy but reference to vector
}

int main()
{
    std::vector<Vertex> vertices;
    vertices.push_back({ 1,2,3 });
    vertices.push_back({ 4,5,6 });
    Function(vertices);

    for (int i = 0; i < vertices.size(); i++)
    {
        std::cout << vertices[i] << std::endl;
    }
     

    vertices.erase(vertices.begin() + 1);

    for (Vertex& v : vertices)  // witout & it would be copied
    {
        std::cout << v << std::endl;
    }
}

