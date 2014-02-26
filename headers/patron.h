//patron.h

//--------------------------------------------------------------------------
// Patron
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// Gary Mixson, Binh Nguyen
// Implemented by:
// A Patron in the library who is able to perform transactions.

#ifndef PATRON_H
#define PATRON_H

#include "person.h"

class Patron : public Person {
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of Patron
		// Assumptions: All information needed to construct the
		//		patron is provided.
		// Precondition: Patron information is supplied.
		// Postcondition: Patron has been constructed.
		Patron(string name, int id);
		
		//-----------------------------------------------------------
		// destructor
		// Destroys an instance of Patron
		// Assumptions: None
		// Precondition: None
		// Postcondition: Patron has been destroyed.
		~Patron();
};

#endif // PATRON_H
