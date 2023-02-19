
#include <iostream>

struct Vector2 {
    float x, y;
};

struct Vector4 {
    
    union
    {
        struct {
            float x, y, z, w;
        };
         struct 
        {
             Vector2 a, b;
        };
        
    };
};



void PrintVector2(const Vector2& vector)
{
    std::cout << vector.x << "," << vector.y << std::endl;
}
int main()
{
    Vector4 vector = { 1.0 , 2.0 , 3.0 ,4.0 };

    PrintVector2(vector.a);
    PrintVector2(vector.b);
    vector.z = 99;
    PrintVector2(vector.a);
    PrintVector2(vector.b);






}
