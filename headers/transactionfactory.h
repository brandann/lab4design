//transactionfactory.h

#ifndef TRANSACTIONFACTORY_H
#define TRANSACTIONFACTORY_H

#include <iostream>
#include "transaction.h"

// TransactionFactory
// parses and returns a clone of a Transaction item
class TransactionFactory
{
	public:
		// TransactionFactory
		// Default constructor
		TransactionFactory();
		
		// ~TransactionFactory
		// Default deconsructor
		~TransactionFactory();
		
		// build
		// parses the string token, and creates a Transaction
		// item with Person and Item.
		// string must be category token
		// Person must be valid pointer to Person object
		// Item must be valid pointer to Item object
		bool build(string, Person*, Item*);

	protected:

	private:
		// Transaction array of Transaction children
		Transaction *transaction;

};

#endif // TRANSACTIONFACTORY_H
