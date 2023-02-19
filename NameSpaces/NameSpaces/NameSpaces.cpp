// NameSpaces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>


namespace apple {

    void print(const std::string& text)
    {
        std::cout << text << std::endl;
    }

}

namespace orange {
    void print(const std::string& text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }

}


int main()
{

    apple::print("Selim");
    orange::print("Reverse");


}

