#include <stdio.h>
#include <string>


using namespace std;

class Shape
{
private:
	std::string name;
	float area = 0.0;
public:
	std::string getName();
	void setName(std::string name);
	virtual float getArea() = 0;
};

void Shape::setName(std::string name)
{
	this->name = name;
}

std::string Shape::getName()
{
	return this->name;
}

class Rectangle : public Shape
{
private:
	float length;
	float width;
public:
	Rectangle(float length, float width);
	float getArea();
};

Rectangle::Rectangle(float length, float width)
{
	this->length = length;
	this->width = width;
}

float Rectangle::getArea()
{
	return length*width;
}

int main()
{

	Rectangle rectangle(2.0, 3.0);
	rectangle.setName("TestRectangle1");
	
	printf("Name: %s\n", rectangle.getName().c_str());
	printf("Area: %f\n", rectangle.getArea());

	getchar();
	return 0;
}