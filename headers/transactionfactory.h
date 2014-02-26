//transactionfactory.h

//--------------------------------------------------------------------------
// TransactionFactory
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// parses and returns a clone of a Transaction item

#ifndef TRANSACTIONFACTORY_H
#define TRANSACTIONFACTORY_H

#include <iostream>
#include "transaction.h"

class TransactionFactory
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of TransactionFactory
		// Assumptions:   	All information needed to construct the
		// 			TransactionFactory is provided.
   		// Precondition:  	TransactionFactory information is supplied.
   		// Postcondition: 	TransactionFactory has been constructed.
		TransactionFactory();
		
		//-----------------------------------------------------------
		// destructor
		// destroys the instance of TransactionFactory
		// Assumptions:   	TransactionFactory has been constructed
   		// Precondition:  	None.
   		// Postcondition: 	TransactionFactory is destroyed
   		//			member memory is freed.
		~TransactionFactory();
		
		//-----------------------------------------------------------
		// build (Public)
   		// parses the string token, and creates a Transaction
		// item with Person and Item.
   		// Assumptions: 	parameters are correct.
   		// Precondition: 	string must be category token
		// 			Person must be valid pointer to Person object
		// 			Item must be valid pointer to Item object
   		// Postcondition:	transaction instance is returned
		Transaction* build(string, Person*, Item*);

	protected:

	private:
		// Transaction array of Transaction children
		Transaction *transaction;
		
		//-----------------------------------------------------------
		// hash (Private)
		// rerurns the hash of the string identifier
		// Assumptions:   	string is a valid transaction identifier
   		// Precondition:  	string is hashable
   		// Postcondition: 	int of hashed string is returned
   		int hash(const string) const;

};

#endif // TRANSACTIONFACTORY_H
