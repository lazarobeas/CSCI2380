
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl;
        //abort();
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// ##### CLASS FILE ORGANIZATION #####
//
// You can have all the code for a class in one place,
// like we did above for the Weather class.
//
// But convention is to separate the class into two parts:
// 1. A class _definition_ that specifies the instance variables and methods.
// 2. A class _implementation_ that contains the method code.
//
// Each part goes into a different file:
// 1. The definition is in _header file_ that ends with ".h".
// 2. The implementation is in a _source file_ that ends with ".cpp"
//
// Check out the example Burrito class in burrito.h and burrito.cpp.
//
// To use a class organized this way, include the header file:
//
#include "burrito.h"
//
// The source file will also need to be part of your project.
//
void test_burrito()
{
	Burrito b1(Burrito::Asada, false);	// The parameterized constructor will be called to initialize the object b1 with the values specified here
	test(b1.price() == 5);
	b1.add_cheese();
	test(b1.price() == 6);
	b1.change_meat(Burrito::Nada);
	test(b1.price() == 3);

	Burrito b2; // The default constructor will be called to initialize the object b2 with the default values specified in the class implementation
	test(b2.price() == 2);
	b2.add_cheese();
	test(b2.price() == 3);
	b2.change_meat(Burrito::AlPastor);
	test(b2.price() == 5);
	b2.change_meat(Burrito::Asada);
	test(b2.price() == 6);
	b2.remove_cheese();
	test(b2.price() == 5);
}

int main() 
{
	test_burrito();
	cout << "Tests complete." << endl;
	return 0;
}


//	Burrito b1(static_cast<Burrito::Meat>(2), false);	// The parameterized constructor will be called to initialize the object b1 with the values specified here