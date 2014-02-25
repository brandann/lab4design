//hashableitem.h

//--------------------------------------------------------------------------------------------------
//HashableItem: is an abstract class designed to be stored in a Hashtable. 
//              Derived classes define what data to store and how to hash that data.


#ifndef HASHABLEITEM_H
#define HASHABLEITEM_H


#include <vector>                                       //vector
#include "transaction.h"

class HashableItem
{
	public:
		HasableItem();					//default constructor
		virtual ~HashableItem();                        //destructor
		virtual int hash(const int) const = 0;          //hash itself and return int between 0 and argument
		virtual bool operator==(const HasableItem &) const = 0; //compare to another hashableitem
		
		vector<*Transaction> getHistory() const;	//return container of pointers to all transactions
		void addToHistory(const *Tranasction &);        //add a transaction to history
		void clearHistory();                            //remove all items from items history

	protected:
		

	private:
		vector<*Transaction> history;			//points to all transactions that involve this item

};

#endif // HASHABLEITEM_H
