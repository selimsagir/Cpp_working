
#include <iostream>
#include <vector>

std::string GetName()
{
    return "Cherno";
}


int main()
{


    std::vector<std::string> strings;
    strings.push_back("SElIM");
    strings.push_back("HI");


    for (std::vector<std::string>::iterator it = strings.begin();
        it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }


    for (auto it = strings.begin();
        it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }




    std::string name = GetName();
    auto name1 = GetName();


    /*int a = 5;

    auto b = a;*/

    //auto ch = "Selim"; //hover the mouse cursor see type in visual studio


}

