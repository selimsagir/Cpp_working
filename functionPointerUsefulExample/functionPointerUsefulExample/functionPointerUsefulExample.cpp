// functionPointerUsefulExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
#include <vector>

void printer(int value)
{
	std::cout << "Value : " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*fn)(int))
{
	for (int value : values)
		fn(value);
}

int main()
{   
	std::vector<int> values = { 1, 2,3 ,4 , 5 };
	ForEach(values,printer);



}

