#pragma once
#include <string>
#include <cmath>
using namespace std;

// CLASS DECLARATION

class triangle
{
public:
// receives the values from the client and assigns them to the private data members
	void setSides(double s1, double s2, double s3);
// returns the values corresponding to the three private data members to the client
	void getSides(double& s1, double& s2, double& s3);
// calculates and returns the perimeter of the triangle to the client
	double getPerimeter();
// calculates and returns the are of the triangle to the client
	double getArea();
// determines and returns the type of triangle to the client
	string triType();
// initializes the three private data members
	triangle();	// DEFAULT CONSTRUCTOR

private:
	double side1;
	double side2;
	double side3;
};

// CLASS IMPLEMENTATION

// assigns the values received from the client to the three private data members
void triangle::setSides(double s1, double s2, double s3)
{
	side1 = s1;
	side2 = s2;
	side3 = s3;
}

// returns the values corresponding to the three private data members to the client
void triangle::getSides(double& s1, double& s2, double& s3)
{
	s1 = side1;
	s2 = side2;
	s3 = side3;
}

// adds the sides and retunrs the result to the client
double triangle::getPerimeter()
{
	return side1 + side2 + side3;
}
// calculates the semiperimeter, and returns the area calculated using the semiperimeter and sides to the client
double triangle::getArea()
{
	double s;
	s = getPerimeter() / 2.;
	return sqrt(s*(s - side1)*(s - side2)*(s - side3));
}
// determines the type of triangle and returns it as text to the client
string triangle::triType()
{
	string type;
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
		if (side1 == side2 && side2 == side3)
			type = "equilateral";
		else if (side1 != side2 && side2 != side3 && side1 != side3)
			type = "scalene";
		else
			type = "isosceles";
	else
		type = "inexistent!";
	return type;
}
// DEFAULT CONSTRUCTOR: initializes the three private data members to zero
triangle::triangle()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
}

