//***********************************************************************
// Team #15     CSCI 2380   Fall 2023   Homework # 1
// Lazaro Beas
// Yael Alarcon
//***********************************************************************

#include "pokemon.h"

// Call onto Pokemon constructor and establishes relationship with private data
// values
Pokemon::Pokemon(string name, int ndex, Type type1) {
  _name = name;
  _ndex = ndex;
  types[0] = type1;
  type_count = 1;
}
// Now this calls onto the second pokemon constructor with 2 types
Pokemon::Pokemon(string name, int ndex, Type type1, Type type2) {
  _name = name;
  _ndex = ndex;
  types[0] = type1;
  types[1] = type2;
  type_count = 2;
}
// Linking private data types
string Pokemon::name() { 
  return _name;
}

// Linking private data types
int Pokemon::Ndex() { 
  return _ndex;
}

// Type 1 is linked to first type of pokemon types[0]
Pokemon::Type Pokemon::type1() { 
  return types[0];
}

// If statement determines if pokemon has more than 2 types
bool Pokemon::is_multitype() {
  if (type_count == 1) {
    return false;
  } else {
    return true;
  }
}
// Type 2 is linked to type of pokemon types[1]

Pokemon::Type Pokemon::type2() {
  return types[1];
}

// Damage Multiplier logic
float Pokemon::damage_multiplier(Type attack_type) {
  
  // First we start by defining all of the pokemon that are only one type 
  if(Pokemon::type_count == 1) {
    
    // If pokemon is normal, then his attack will be 1.0 versus everyone, but we also have to consider how damage is applied to fighting vs normal, flying, poison, etc...
    if (attack_type == Pokemon::Normal) {
      return 1.0;
    }
      // Fighting does x damage against fighting flying and poison
    else if (attack_type == Pokemon::Fighting) {
      // Declare how much damage fighting it does versus each types[0]
      if (types[0] == Pokemon::Normal) {
        return 2.0;
      } else if (types[0] == Pokemon::Fighting) {
        return 1.0;
      } else if (types[0] == Pokemon::Flying) {
        return 0.5;
      } else if (types[0] == Pokemon::Poison) {
        return 0.5;
      }
    }
    // Now we do this for fighting pokemon
    else if(attack_type == Pokemon::Flying) {
      if (types[0] == Pokemon::Normal) {
        return 1.0;
      } else if (types[0] == Pokemon::Fighting) {
        return 2.0;
      } else if (types[0] == Pokemon::Flying) {
        return 1.0;
      } else if (types[0] == Pokemon::Poison) {
        return 1.0;
      }
    }
      
    // Now we do this for poison pokemon
    else if (attack_type == Pokemon::Poison) {
      if (types[0] == Pokemon::Normal) {
        return 1.0;
      } else if (types[0] == Pokemon::Fighting) {
        return 1.0;
      } else if (types[0] == Pokemon::Flying) {
        return 1.0;
      } else if (types[0] == Pokemon::Poison) {
        return 0.5;
      }
    }

    
// Implement logic for 2 type pokemon
  
  }
}