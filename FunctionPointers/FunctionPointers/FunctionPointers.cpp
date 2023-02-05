#include <iostream>



void HelloWorld()
{
	std::cout << "Hello World!\n";
}

void function_2(int a)
{
	std::cout << a << std::endl;
}


int main()
{
	typedef void(*fn)();
	fn fn_hello = HelloWorld;

	typedef void(*fn_0)(int);
	fn_0 fn_print = function_2;

	fn_hello();
	fn_print(55);

	auto x = HelloWorld;

	x();
	x();

 
}

