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
	// C++ 17 
	for (auto [key, value] : my_map) {
		std::cout << key << "," << value << std::endl;
	}

	std::cout << std::endl;

}

