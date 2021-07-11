#include <iostream>
#include <stdlib.h>
#include <cstdint>


class RGBA
{
private:
    // A type alias saves us some typing and makes the class easier to maintain
    using component_type = std::uint_fast8_t;
    component_type m_red;
    component_type m_green;
    component_type m_blue;
    component_type m_alpha;
public:
    RGBA(component_type red = 0,component_type green = 0,component_type blue = 0,component_type alpha = 255) : 
    m_red {red} ,
    m_green {green},
    m_blue {blue},
    m_alpha {alpha}
    {

    }

    void Print()
    {
        std::cout << "red: " << static_cast<int>(m_red) << "\n";
        std::cout << "green: " << static_cast<int>(m_green) << "\n";
        std::cout << "blue: " << static_cast<int>(m_blue) << "\n";
        std::cout << "alpha: " << static_cast<int>(m_alpha) << "\n";
    }    
};


int main()
{
    RGBA teal{0, 127, 127, 255};
    teal.Print();
    return 0;
}