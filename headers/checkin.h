//checkin.h

#ifndef CHECKIN_H
#define CHECKIN_H

#include <iostream>
#include "transaction.h"

class CheckIn: Public Transaction
{
	public:
		CheckIn(Person*, Item*):Transaction(Person*, Item*);
		virtual ~Checkin();
		char getType() const;

	protected:

	private:
		const char token = 'R';

};

#endif // CHECKIN_H
