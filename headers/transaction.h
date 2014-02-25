//transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "person.h"
#include "item.h"

class Transaction
{
	public:
		Transaction();
		virtual ~Transaction(Person*, Item*);

	protected:

	private:
		Person *person;
		Item *item;

};

#endif // TRANSACTION_H
