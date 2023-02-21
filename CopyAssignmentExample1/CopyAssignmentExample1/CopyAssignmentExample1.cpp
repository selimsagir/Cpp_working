#include <iostream>

class MyClass {
public:
    // default constructor
    MyClass()
        : m_data(nullptr), m_size(0) {
    std::cout << "MyClass()\n";
    }
    // constructor with size parameter
    MyClass(int size)
        : m_data(new int[size]), m_size(size) {

    std::cout << " MyClass(int size)\n";
    }
    // copy constructor
    MyClass(const MyClass& other)
        : m_data(new int[other.m_size]), m_size(other.m_size)
    {
        for (int i = 0; i < other.m_size; i++) {
            m_data[i] = other.m_data[i];
        }
        std::cout << " copy constructor\n";
    }

    // move constructor
    MyClass(MyClass&& other) noexcept
        : m_data(other.m_data), m_size(other.m_size)
    {
        other.m_data = nullptr;
        other.m_size = 0;
        std::cout << "  move constructor\n";
    }

    // Copy assignment operator
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] m_data;
            m_size = other.m_size;
            m_data = new int[m_size];
            for (int i = 0; i < m_size; i++) {
                m_data[i] = other.m_data[i];
            }
        }
        std::cout << "  Copy assignment operator\n";
        return *this;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete[] m_data;
            m_data = other.m_data;
            m_size = other.m_size;
            other.m_data = nullptr;
            other.m_size = 0;
        }
        std::cout << " Move assignment operator\n";
        return *this;
    }

    // destructor
    ~MyClass() {
        delete[] m_data;
        std::cout << "Destructor\n";
    }

private:
    int* m_data;
    int m_size;
};

int main()
{
    MyClass a(5);
    MyClass b = a;      // copy constructor called
    MyClass c;
    c = a;              // copy assignment operator called
    MyClass d(std::move(a));  // move constructor called
    MyClass e;
    e = std::move(b);   // move assignment operator called

    std::cout << "Hello World!\n";
}
