#include <iostream>


template<typename T>
class Stack
{
private:
    T* stackArray;
    int top;
    int capacity;

public:
    Stack(int size)
        :top(-1), capacity(size) {
        stackArray = new T[size];
        std::cout << "Constructor invoked..." << std::endl;
           // int[5] , float[5]
    }
    ~Stack() {
        delete[] stackArray;
        std::cout << "Deconst invoked..." << std::endl;
    }

    void push(T element) {
        if (top == capacity - 1) {
            std::cout << "Stack is full, no more push" << std::endl;
        }
        else {
            stackArray[++top] = element;
        }
    }
    T pop() {
        if (top == -1) {
            std::cout << "Stack is empty..." << std::endl;
            return T();
        }
        else {
            return stackArray[top--];
        }
    }
};

template<typename T>
Stack::

int main()
{   
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
     
    std::cout << "popped value : " << intStack.pop() << std::endl;

    Stack<char> charStack(3);
    charStack.push('E');
    charStack.push('S');
    charStack.push('K');

    std::cout << "popped value : " << charStack.pop() << std::endl;

}

 