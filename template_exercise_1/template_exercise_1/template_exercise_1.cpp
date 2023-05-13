 
#include <iostream>


using namespace std;

template <typename T>
class Entity
{
private:
    T x;
public:
    Entity(T xx)
        :x{ xx }
    {
    }

    T getValue()
    {
        return x;
    }
};

template<typename T>
class MyClass
{
private:
    T x;
public:
    MyClass(T xx);
};

template< typename T>
MyClass<T>::MyClass(T xx)
    :x{ xx }
{
    cout << "Constructor invoked, value is :" << x << endl;
}

template <typename T>
T sum(T val1, T val2) {
    return val1 + val2;
}





int main()
{
    int ret_int;
    double ret_double;
    ret_int = sum<int>(1, 2);
    ret_double = sum<double>(2.2, 3.3);
    cout << "sum (i)-> " << ret_int << endl;
    cout << "sum (d)-> " << ret_double << endl;
    cout <<"...." << endl;
    Entity<int> obj1(10);
    cout << "output of obj1 : " << obj1.getValue() << endl;
    Entity<float>obj2(100.1);
    cout << "output of obj2 : " << obj2.getValue() << endl;

    MyClass<int> obj3{ 999 };
    MyClass<float> obj4{ 99.22 };

}

 