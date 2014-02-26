//person.h

//--------------------------------------------------------------------------
// Person
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//              Gary Mixson, Binh Nguyen
// Implemented by:
// Creates a Person item, representing a user of the Library.



#ifndef PERSON_H
#define PERSON_H

#include "hashableitem.h"


class Person : public HashableItem {
public:

	//-----------------------------------------------------------
  // constructor
  // contructs an instance of Person
  // Assumptions: All information needed to construct the
  //              Person is provided.
  // Precondition: Person information is supplied.
  // Postcondition: Person has been constructed.
  Person(string name, int id);
  
  //-----------------------------------------------------------
  // destructor
  // destroys an instance of Person
  // Assumptions: None
  // Precondition: None
  // Postcondition: Person has been destroyed.
  virtual ~Person()sx;
  
  //-----------------------------------------------------------
  // getName (Public)
  // Returns the name of the Person.
  // Assumptions: None
  // Precondition: None
  // Postcondition: Name is returned to caller.
  string getName();
  
  //-----------------------------------------------------------
  // getID(Public)
  // Returns the ID of the Person.
  // Assumptions: None
  // Precondition: None
  // Postcondition: ID is returned to caller.
  int getId();
  
private:
  string name;  // person's name
  int id;       // person's id
};

#endif
