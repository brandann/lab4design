//patron.h

#ifndef PATRON_H
#define PATRON_H

#include "person.h"

class Patron : public Person {
	public:
		Patron(string name, int id);
		~Patron();
};

#endif // PATRON_H
