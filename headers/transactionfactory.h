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
		Transaction* build(Person*, Item*);

	protected:

	private:
		Transaction *transaction;

};

#endif // TRANSACTIONFACTORY_H
