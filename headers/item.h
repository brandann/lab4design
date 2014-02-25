// item.h

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
class Item
{
	public:
                Item();
                ~Item();
                 int getQuantity(); // return number of copies

	protected:

	private:
	
	        int quantity; // number of copies of the item
                Format format; // such as hardcopy or ebook
                // might be implemented with a hardcoded string at this point,
                // since there is no current Format class.
  

};

#endif // ITEM_H
