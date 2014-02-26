//transaction.h

//--------------------------------------------------------------------------
// Transaction
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// Base class for transactionable items (Checkin, Checkout, etc.)
// Person must be a valid pointer to a person object
// Item must be a valid pointer to a item objcet

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "person.h"
#include "item.h"

class Transaction
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of Transaction
		// Assumptions:   	All information needed to construct the
		// 			Transaction is provided.
   		// Precondition:  	Transaction information is supplied.
   		// Postcondition: 	Transaction has been constructed.
		// 			person and item stored.
		virtual Transaction(Person*, Item*) = 0;
		
		//-----------------------------------------------------------
		// destructor
		// Destructs an istance if Transaction
		// Assumptions:		Transaction exists
		// Precondition:	Transaction exists
		// Postcondition:	Transaction has been destroyed
		//			Transaction instance has been removed
		//			from Person, and Item
		virtual ~Transaction();

	protected:

	private:
		// pointer to person object that is involved in
		// this transaction
		Person *person;
		
		// pointer to item object that is involved in
		// this transaction
		Item *item;

};

#endif // TRANSACTION_H
