
#ifndef BURRITO_H
#define BURRITO_H


class Burrito
{
	public:
		// Outside the class, refer to these as 
		// Burrito::Pollo, Burrito::Pico, etc.
		enum Meat { Pollo, Asada, AlPastor, Nada};

		// Constructor. 
		// Creates a burrito with the specified ingredients.
		Burrito(Meat m, bool cheese);

		// Constructor. 
		// Creates a burrito with no (Nada) meat and no cheese.
		Burrito();

		// Changes the burrito's meat to the parameter meat.
		void change_meat(Meat m);
		
		// Adds/removes cheese to/from the burrito.
		void add_cheese();
		void remove_cheese();
		
		// Returns the burrito's current meat/cheese
		Meat meat();
		bool cheese();

		// Computes the price.
		// A burrito with no meat/cheese costs $2.
		// Cheese is $1 extra.
		// Meat costs $2, and Asada is $1 extra. 
		int price();

	private:
		Meat _meat;
		bool _cheese;
};

#endif

