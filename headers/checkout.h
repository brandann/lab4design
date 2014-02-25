//checkout.h

#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <iostream>
#include "transaction.h"

class CheckOut: Public Transaction
{
	public:
		CheckOut(Person*, Item*):Transaction(Person*, Item*);
		virtual ~Checkout();
		char getTyoe() const;

	protected:

	private:
		const char token = 'C';

};

#endif // CHECKOUT_H
