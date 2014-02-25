//transactionfactory.h

#ifndef TRANSACTIONFACTORY_H
#define TRANSACTIONFACTORY_H

#include <iostream>
#include "transaction.h"

class TransactionFactory
{
	public:
		TransactionFactory();
		~TransactionFactory();
		bool build(string, Person*, Item*);

	protected:

	private:
		Transaction *transaction;

};

#endif // TRANSACTIONFACTORY_H
