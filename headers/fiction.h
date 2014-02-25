//fiction.h

#ifndef FICTION_H
#define FICTION_H

#include <iostream>
class Fiction : public Book
{
	public:
		Fiction();
		~Fiction();
		char getType(); // always returns "F"
	protected:

	private:
		const char "F";
};

#endif // FICTION_H
