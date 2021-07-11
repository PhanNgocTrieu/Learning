#include <iostream>

class Something
{
private:
    std::string m_str;
    int m_int;
public:

    Something(): m_int{0}, m_str {""} { }
    Something(const int& ip_int, const std::string& ip_str) : m_int{ip_int}, m_str {ip_str} { }
    void resetValue() { m_int = 0; m_str =""; }
    void setValue(int value, std::string str) { m_int = value; m_str = str; }
 
    int getIntValue() const { return m_int; } // note addition of const keyword after parameter list, but before function body
    //void resetValue() const { m_value = 0; } // error because m_value is unchangeable

    const std::string& getStrValue() const { 
        std::cout << "Call from const referene!\n";
        return m_str;
    } // getValue() for const objects (returns const reference)
    std::string& getStrValue() { 
        std::cout << "Call from non-const referene!\n";
        return m_str;
    } // getValue() for non-const objects (returns non-const reference)
};

int main()
{
    const Something something{3, "Hello"}; // calls default constructor
    Something something2{5, "Hello"};
    //something.m_value = 5; // compiler error: violates const
    //something.setValue(5); // compiler error: violates const
    // std::cout << something.getIntValue() << std::endl;
    // std::cout << something.getStrValue() << std::endl;

    // std::cout << something2.getIntValue() << std::endl;
    // std::cout << something2.getStrValue() << std::endl;



    Something something3{7,"Blamma"};
    
    std::cout << something3.getStrValue() << std::endl;
	something3.getStrValue() = "Hi"; // calls non-const getValue(); | after this return *this->m_str = "Hi" (assign for m_str Hi)
	std::cout << something3.getStrValue() << std::endl;
    
	const Something something4{};
	something4.getStrValue(); // calls const getValue();

    return 0;
}