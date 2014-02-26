//checkout.h

//--------------------------------------------------------------------------
// CheckOut
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// Child class holds Person and Item information involved in a single
// Checkout action.
// Person must be a valid pointer to a person object
// Item must be a valid pointer to a item objcet

#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <iostream>
#include "transaction.h"

class CheckOut: Public Transaction
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of CheckOut
		// Assumptions:   	All information needed to construct the
		// 			CheckOut is provided.
   		// Precondition:  	CheckOut information is supplied.
   		// Postcondition: 	CheckOut has been constructed.
		// 			person and item stored.
		CheckOut(Person*, Item*):Transaction(Person*, Item*);
		
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
		const char token = 'C';

};

#endif // CHECKOUT_H
