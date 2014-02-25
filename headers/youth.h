//youth.h

#ifndef YOUTH_H
#define YOUTH_H

#include <iostream>
class Youth : public Book
{
	public:
		Youth();
		~Youth();
		char getType(); // always returns "Y"
	protected:

	private:
		const char "Y";
};

#endif // YOUTH_H
