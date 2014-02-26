//hashtable.h

//--------------------------------------------------------------------------
// HashTable
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 		Gary Mixson, Binh Nguyen
// Implemented by:
// Performs hashing actions on Hashable Items.

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "HashableItem.h"                         //items to store in table

class HashTable
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of HashTable
		// Assumptions: None.
		// Precondition: None.
		// Postcondition: HashTable has been constructed.
		HashTable();
		
		//-----------------------------------------------------------
		// destructor
		// Destroys an instance of HashTable
		// Assumptions: HashableItems are completely destroyed by
		// 		their destructors.
		// Precondition: None.
		// Postcondition: HashTable has been destroyed.
		~HashTable();

		//-----------------------------------------------------------
		// insert (public)
		// Inserts an item into the hashtable.
		// Assumptions: Only HashableItems are entered.
		// Precondition: None.
		// Postcondition: Item has been inserted into the table.		
		bool insert(const *HashableItem &);
		
		//-----------------------------------------------------------
		// retrieve (public)
		// Retrieves an item from the hashtable.
		// Assumptions: Only HashableItems are entered.
		// Precondition: None.
		// Postcondition: Item has been retrieved from the table.
		bool retrive(*HashableItem &);

	protected:

	private:
		*HashableItem items[];  // items in the hashtable.
		int tblSize;		// current table size, a prime number

};

#endif // HASHTABLE_H
