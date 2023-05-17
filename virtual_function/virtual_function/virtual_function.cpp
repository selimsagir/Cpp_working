#include <iostream>
template<typename T, typename U>
class Shape {
private:
    T x;
    T y;

public:
    Shape()
        : x(0), y(0)
    {
    }

    ~Shape() = default;

    T getX() {
        return x;
    }

    T getY() {
        return y;
    }

    void setX(T val) {
        x = val;
    }

    void setY(T val) {
        y = val;
    }

    virtual T ShapeArea(T h, U w) {
        return h * w;
    }
};

template<typename T>
class Square : public Shape<T, T> {
public:
    T ShapeArea(T h, T w) override {
        return h * w;
    }
};

int main() {
    Square<int> square;
    square.setX(5);
    square.setY(5);
    int area = square.ShapeArea(5,5);
    std::cout << "Area: " << area << std::endl;

    return 0;
}
