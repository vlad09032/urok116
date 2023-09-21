#include <iostream>

class Ball
{
	std::string m_color;
	double m_radius;
public:
	/*Ball(const std::string &color)
	{
		m_color = color;
		m_radius = 20.0;
	}*/
	Ball(double radius)
	{
		m_color = "Red";
		m_radius = radius;
	}
	Ball(const std::string &color = "Red", double radius = 20.0)
	{
		m_color = color;
		m_radius = radius;
	}
	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius<<std::endl;
	}
};

int main()
{
	Ball def;
	def.print();

	Ball black("black");
	black.print();

	Ball thirty(30.0);
	thirty.print();

	Ball blackThirty("black", 30.0);
	blackThirty.print();

	return 0;
}