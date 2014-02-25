//checkin.h

#ifndef CHECKIN_H
#define CHECKIN_H

#include <iostream>
#include "transaction.h"

// Checkin
// child class holds Person and Item information involved in a single
// Checkin action.
// Person must be a valid pointer to a Person object
// Item must be a valid pointer to a Item object
class CheckIn: Public Transaction
{
	public:
		// Checkin
		// Default constructor, sets Transaction to 
		// Person, Item
		CheckIn(Person*, Item*):Transaction(Person*, Item*);
		
		// ~Checkin
		// Default deconstructor
		virtual ~Checkin();
		
		// getType
		// returns char type "token" to identify the category
		// of the object
		virtual char getType() const;

	protected:

	private:
		// token
		// char identifier of the object category
		const char token = 'R';

};

#endif // CHECKIN_H
