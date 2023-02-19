/*
*  This is lesson for iterators in C++
*  Quick notes;
*  1.. For array and basic data types C type iteration with the for loop is enough
*  2.. However for has map or other types iterators are must.
*  3.. there is itarator and const_iterator I have used in this examples but there is more
*  4.. Using "using" keyword is very useful her as we can see in the line 
*  "using ScoreMap = std::unordered_map<std::string, int>;" otherwise we should use this expression 
*  in the for loop.
*/



#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
    std::vector<int> values = { 1, 2,3,4,5 };

	for (int i = 0; i < values.size(); i++)
	{
		std::cout << values[i] << std::endl;
	}
	for (int value : values) {
		std::cout << value << std::endl;

	}

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++) {
		std::cout << *it << std::endl;
	}
	
	std::cout << std::endl;
	using ScoreMap = std::unordered_map<std::string, int>;
	/*std::unordered_map<std::string, int> my_map;*/
	ScoreMap my_map;
	my_map["SELIM"] = 2;
	my_map["TRABZON"] = 5;
	for (ScoreMap::const_iterator it = my_map.begin(); it != my_map.end(); it++) {
		
		auto& key = it->first;
		auto& value = it->second;
		std::cout << key << "," << value << std::endl;
	}
	std::cout << std::endl;
	for (auto kv : my_map) {
		auto& key = kv.first;
		auto& value = kv.second;
		std::cout << key << "," << value << std::endl;
	}
	std::cout << std::endl;
	// This type of iteration is only available after C++ 17 , or newer.
	for (auto [key, value] : my_map) {
		std::cout << key << "," << value << std::endl;
	}

	std::cout << std::endl;

}

