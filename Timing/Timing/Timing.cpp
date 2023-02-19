#include <iostream>
#include <chrono>
#include <thread>

struct Timer 
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.f;
		std::cout << "Timer took " << ms << "ms" << std::endl;
	}
};

void Function()
{
	Timer timer;
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << " Hello" << std::endl;
	}

}




int main()
{
	
	Function();



	std::cin.get();

}





//int main()
//{
//	using namespace std::literals::chrono_literals;
//	auto start = std::chrono::high_resolution_clock::now();
//	std::this_thread::sleep_for(1s);
//	auto end = std::chrono::high_resolution_clock::now();
//
//	std::chrono::duration<float> duration = end - start;
//	std::cout << duration.count() << std::endl;
//
//
//
//	std::cin.get();
//
//}
//
