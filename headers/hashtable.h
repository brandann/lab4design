//hashtable.h

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "HashableItem.h"                                                  //items to store in table

class HashTable
{
	public:
		HashTable();
		~HashTable();
		
		bool insert(const *HashableItem &);
		bool retrive(*HashableItem &);

	protected:

	private:
		*HashableItem items[];
		int tblSize;

};

#endif // HASHTABLE_H
