#include "stack_s.h"
#include <iostream>


template<typename T>
Stack<T>::Stack(int size)
	:top(-1), capacity(size)
{
	array = new T[size];
}

template<typename T>
Stack<T>::~Stack() {
	delete[] array;
}

template<typename T>
void Stack<T>::push(T element) {
	if (top == (capacity - 1)) {
		std::cout << "no more space" << std::endl;
	}
	else {
		array[++top] = element;
	}
}
template<typename T>
T Stack<T>::pop() {
	if (top == -1) {
		std::cout << "empty array" << std::endl;
		return T;
	}
	else {
		return array[top--];
	}
}