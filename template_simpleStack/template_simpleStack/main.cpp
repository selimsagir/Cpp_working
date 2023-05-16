#include <iostream>
#include <stack_s.h>


int main()
{   
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
     
    std::cout << "popped value : " << intStack.pop() << std::endl;

    Stack<char> charStack(3);
    charStack.push('E');
    charStack.push('S');
    charStack.push('K');

    std::cout << "popped value : " << charStack.pop() << std::endl;

}

 