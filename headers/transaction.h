//transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "person.h"
#include "item.h"

// Transaction
// tranaction holds person and item related to eachother for a
// transaction child class.
// Person must be a valid pointer to a person object
// Item must be a valid pointer to a item objcet
class Transaction
{
	public:
		// default constructor, child classes to implement
		// person and item stored.
		virtual Transaction(Person*, Item*) = 0;
		
		// default deconstructor
		virtual ~Transaction();
		
		// getType()
		// returns the char token of the child class
		virtual char getType() const = 0;

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
