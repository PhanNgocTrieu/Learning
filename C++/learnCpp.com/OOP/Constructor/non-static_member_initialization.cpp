#include <string>
#include <iostream>
 
class Ball
{
private:
	std::string m_color {"black"};
	double m_radius {};
 
public:
	// Default is automatically one:
	// Constructor with only radius parameter (color will use default value)
	// Ball(double radius) : m_radius {radius}
	// {
	// }
 
	//Constructor with both color and radius parameters
	Ball(const std::string &color = "black", double radius = 10.0) : m_color {color}, m_radius {radius}
	{
	}
 
	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};
 
int main()
{
	Ball def{};
	def.print();

	// Ball blue{ "blue" };
	//blue.print();
	
	// Ball twenty{ 20.0 };
	// twenty.print();
	
	// Ball blueTwenty{ "blue", 20.0 };
	// blueTwenty.print();
 
	return 0;
}