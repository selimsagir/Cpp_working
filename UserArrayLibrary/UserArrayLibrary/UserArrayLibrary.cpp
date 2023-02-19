#include <iostream>
#include <array>

/**
 *  This is a small library for the arrays
 * TODO: put the class to header.
*/
template< typename T, size_t S>
class Array
{
public:
        constexpr size_t  Size() const
        {
            return S;
        }
        T& operator[](size_t index) {  // operator overloading
            return m_Data[index];
        }
        const T operator[](size_t index) const {
            return m_Data[index];
        }
        T* Data() { return m_Data; }
        const T* Data() const { return m_Data; }
private:
    T m_Data[S];

};


int main()
{

    Array<int, 5> data;
    //memset(data.Data(), 0, data.Size() * sizeof(int));
    memset(&data[0], 0, data.Size() * sizeof(int));
    data[1] = 55;
    data[3] = 11;
    for (size_t i = 0; i < data.Size(); i++)
    {
        //data[i] = 2;
        std::cout << data[i] << std::endl;

    }

    Array<std::string, 2> s_str;
    s_str[0] = "selim";
    s_str[1] = "trabzon";
    for (size_t i = 0; i < s_str.Size(); i++)
    {
        std::cout << s_str[i] << std::endl;
    }





    static_assert(data.Size() < 10, "Size is too large");  // constrxpr olmadan hata verir

    const auto& arrayReference = data;



    for (size_t i = 0; i < data.Size(); i++)
    {
        //data[i] = 2;
        std::cout << arrayReference[i] << std::endl;
    }



    /*
    
    // std array library:
    std::array<int, 10> collection;
    for (int i = 0; i < 10; i++)
    {
        std::cout << collection[i] << std::endl;
    }

   */


    std::cin.get();
}


