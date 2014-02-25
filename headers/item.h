// item.h

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
class Item
{
	public:
                Item();
                ~Item();
                int quantity; // number of copies of the item
                Format format; // such as hardcopy or ebook

	protected:

	private:
	
                int getQuantity(); // return number of copies

};

#endif // ITEM_H
