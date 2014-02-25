//checkout.h

#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <iostream>
#include "transaction.h"

class CheckOut: Public Transaction
{
	public:
		CheckOut(Person*, Item*);

	protected:

	private:

};

#endif // CHECKOUT_H
