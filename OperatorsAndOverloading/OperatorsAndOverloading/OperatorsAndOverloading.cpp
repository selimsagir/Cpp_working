
#include <iostream>
#include <string>

struct Vector2
{
    int x, y;

    Vector2(int x, int y)
        :x(x), y(y) {}

    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x + other.y);
        //return *this + other;
        //return operator+(other);
    }
    Vector2 operator+(const Vector2& other) const
    {
        //return Vector2(x + other.x + other.y);
        return Add(other);
    }
    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x * other.y);
    }
    Vector2 operator*(const Vector2& other) const
    {
        //return Vector2(x + other.x + other.y);
        return Multiply(other);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << "," << other.y;
    return stream;
}

int main()
{
    Vector2 position(4, 4);
    Vector2 speed(5, 5);
    Vector2 powerup(1, 1);

    Vector2 result1 = position.Add(speed.Multiply(powerup));
    Vector2 result2 = position + speed * powerup;

    std::cout << "\n";
}

