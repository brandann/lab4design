//itemfactory.h

//--------------------------------------------------------------------------
// ItemFactory
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 	 	Gary Mixson, Binh Nguyen
// Implemented by:
// parses and returns a clone of a Item item

#ifndef ITEMFACTORY_H
#define ITEMFACTORY_H

#include <iostream>
class ItemFactory
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of ItemFactory
		// Assumptions: All information needed to construct the
		// ItemFactory is provided.
    		// Precondition: ItemFactory information is supplied.
    		// Postcondition: ItemFactory has been constructed.
		ItemFactory();
		
		//-----------------------------------------------------------
		// destructor
		// destroys the instance of ItemFactory
		// Assumptions: ItemFactory has been constructed
		// Precondition: None.
		// Postcondition: ItemFactory is destroyed
		// 		  member memory is freed.
		~ItemFactory();
		
		//-----------------------------------------------------------
		// buildItem (Public)
		// parses the string token, and creates an Item
		// item with string.
    		// Assumptions: parameters are correct.
    		// Precondition: string must be category token
    		// Postcondition: Item instance is returned
		Item buildItem(string);
	protected:

	private:
		Youth youth;  		// mold for Youth Books
		Fiction fiction;	// mold for Fiction Books
		Periodical periodical;  // mold for Periodicals
};

#endif // ITEMFACTORY_H
