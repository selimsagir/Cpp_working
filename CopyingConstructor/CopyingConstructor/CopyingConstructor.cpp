#include <iostream>
#include <string>


class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
    
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0; // for null termination
    }

    String(const String& other) // deep copy
        :m_Size(other.m_Size)
    {
        std::cout << "Copied String" << std::endl;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, other.m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

void PrintStrings(const String& string) // const!
{
    std::cout << string << std::endl;
}

int main()
{   
    String first = "Selim";
    String second = first;
    second[1] = 'a';
    
    PrintStrings(first);
    PrintStrings(second);
    
    
    //std::cout << first << std::endl;  // these two prints same output because 
    //std::cout << second << std::endl;   // we are writing same address of memeory WITHOUT constructor cdeep copy
    
    
    std::cin.get();
}

