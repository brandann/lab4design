//checkin.h

#ifndef CHECKIN_H
#define CHECKIN_H

#include <iostream>
#include "transaction.h"
#include "person.h"
#include "item.h"

class CheckIn: Public Transaction
{
	public:
		CheckIn(Person*, Item*);

	protected:

	private:

};

#endif // CHECKIN_H
