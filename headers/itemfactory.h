//itemfactory.h

#ifndef ITEMFACTORY_H
#define ITEMFACTORY_H

#include <iostream>
class ItemFactory
{
	public:
		ItemFactory();
		~ItemFactory();
		Item getItem(string);
	protected:

	private:
		Youth youth;
		Fiction fiction;
		Periodical periodical;
};

#endif // ITEMFACTORY_H
