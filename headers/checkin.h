//checkin.h

//--------------------------------------------------------------------------
// Checkin
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// Child class holds Person and Item information involved in a single
// Checkin action.
// Person must be a valid pointer to a person object
// Item must be a valid pointer to a item objcet

#ifndef CHECKIN_H
#define CHECKIN_H

#include <iostream>
#include "transaction.h"

class CheckIn: Public Transaction
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of Checkin
		// Assumptions:   	All information needed to construct the
		// 			Checkin is provided.
   		// Precondition:  	Checkin information is supplied.
   		// Postcondition: 	Checkin has been constructed.
		// 			person and item stored.
		CheckIn(Person*, Item*):Transaction(Person*, Item*);
		
		//--------------------------------------------------------------------------
		// getType (Public)
   		// Returns the type of the transaction
   		// Assumptions: 	type is correct.
   		// Precondition: 	None.
   		// Postcondition:	type is given to caller.
		virtual char getType() const;

	protected:

	private:
		// char identifier of the object category
		const char token = 'R';

};

#endif // CHECKIN_H
