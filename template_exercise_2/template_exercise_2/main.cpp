 
#include <iostream>


template <typename T>
T mySum(T x, T y) {
    return x + y;
}

template <typename T>
class myClass
{
private:
    T x;
public:
    myClass(T rhs)
        : x{rhs} {}
    T getX() const {
        return x;
    }
    void setX(T ax)
    {
        x = ax;
    }
};


int main()
{

    myClass<int> object{ 10 };
    std::cout << "The value of data member is : " << object.getX() << std::endl;
    object.setX(20);
    std::cout << "Changed member value is : " << object.getX() << std::endl;
    int resultint = mySum(10, 20);
    double resuldouble = mySum(10.2, 20.3);
    std::cout << "int result : " << resultint << std::endl;
    std::cout << "double result : " << resuldouble << std::endl;

}   

 