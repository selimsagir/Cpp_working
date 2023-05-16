#pragma once

template<typename T>
class Stack
{
private:
	T* array;
	int capacity;
	int top;
public:
	Stack(int size);
	~Stack();

	void push(T element);
	T pop();
};