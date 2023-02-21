
#include <iostream>


class MyClass
{
public:
    int* array;
    int size;

    // default constructor
    MyClass() {
        array = nullptr;
        size = 0;
    }

    // constructor with array size
    MyClass(int n){
        size = n;
        array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = n;
        }
    }

    // copy constructor
    MyClass(const MyClass& other) {
        size = other.size;
        array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = other.array[i];
        }
    }

    // destructor
    ~MyClass() {
        delete[] array;
    }

private:

};

int main()
{
    MyClass obj(5);  // size of 5

    MyClass obj2 = obj;  // copy with copy consturtor

    for (int i = 0; i < obj.size; i++) {
        std::cout << obj.array[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < obj2.size; i++) {
        std::cout << obj2.array[i] << " ";
    }

    std::cout << std::endl;


    std::cout << "Hello World!\n";
}

