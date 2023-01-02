

#include <iostream>

static int s_level = 1;
static int s_Speed = 2;



int main()
{

    s_Speed = s_level > 5 ? 10 : 5;

    std::string rank = s_level > 10 ? "master" : "beginner";

    std::cout << "Hello World!\n";
}

