// This program demonstrates a simple class
#include <iostream>

using namespace std;

#include "triangle.h"  // contains triangle class declaration and implementation

int main()
{
	triangle tri, tri2, tri3;		// declare objects type triangle
	double s1, s2, s3;		// declare auxiliary variables to pass/receive the sides of the triangle
	cout << "This program will calculate the area and the perimeter of a triangle";
	
	cout << "\n\nFor a first triangle" << endl << endl;
	cout << "Please enter the length of the sides? ";	// get sides values for the first object from the user
	cin >> s1 >> s2 >> s3;
	tri.setSides(s1, s2, s3);							// pass the values to object tri
	cout << "\nHere is the triangle's data:\n\n";
	tri.getSides(s1, s2, s3);												// get sides from object tri
	cout << "Sides: " << s1 << ", " << s2 << ", " << s3 << endl;			// show sides of tri
	cout << "correspond to an " << tri.triType() << " triangle" << endl;	// show type of tri
	cout << "Area: " << tri.getArea() << endl;								// show area of tri
	cout << "Perimeter: " << tri.getPerimeter() << endl;					// show perimeter of tri

	cout << "\n\nFor a second triangle" << endl << endl;
	cout << "Please enter the length of the sides? ";	// get sides values for the second object from the user
	cin >> s1 >> s2 >> s3;
	tri2.setSides(s1, s2, s3);							// pass the values to object tri2
	cout << "\nHere is the triangle's data:\n\n";
	tri2.getSides(s1, s2, s3);												// get sides from object tri2
	cout << "Sides: " << s1 << ", " << s2 << ", " << s3 << endl;			// show sides of tri2
	cout << "correspond to an " << tri2.triType() << " triangle" << endl;	// show type of tri2
	cout << "Area: " << tri2.getArea() << endl;								// show area of tri2
	cout << "Perimeter: " << tri2.getPerimeter() << endl;					// show perimeter of tri2
	tri3 = tri;											// assign the first object to the third one
	cout << "\nHere is the triangle's data:\n\n";
	tri3.getSides(s1, s2, s3);												// get sides from object tri3
	cout << "Sides: " << s1 << ", " << s2 << ", " << s3 << endl;			// show sides of tri3
	cout << "correspond to an " << tri3.triType() << " triangle" << endl;
	cout << "Area: " << tri3.getArea() << endl;								// show area of tri3
	cout << "Perimeter: " << tri3.getPerimeter() << endl;					// show perimeter of tri3

	return 0;
}


