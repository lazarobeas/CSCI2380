
#include "burrito.h"

Burrito :: Burrito(Meat m, bool c)
{
	// Initializing instance variables using constructor parameters 
	this->_meat = m;
	this->_cheese = c;
}

Burrito :: Burrito()
{
	// Initializing instance variables without using constructor parameters
	this->_meat = Nada;
	this->_cheese = false;
}

int Burrito :: price()
{
	int total = 2;
	if (this->_cheese)
		++total;
	if (this->_meat != Nada)
		total += 2;
	if (this->_meat == Asada)
		++total;
	return total;
}

void Burrito :: change_meat(Meat m)
{
	this->_meat = m;
}

Burrito::Meat Burrito :: meat()
{
	return this->_meat;
}

bool Burrito :: cheese()
{
	return this->_cheese;
}

void Burrito :: add_cheese()
{
	this->_cheese = true;
}

void Burrito :: remove_cheese()
{
	this->_cheese = false;
}




