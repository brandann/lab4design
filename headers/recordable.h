//recordable.h

//--------------------------------------------------------------------------
// Recordable
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// Gary Mixson, Binh Nguyen
// Implemented by:
// Recordable is a based class for item and person.
// Use to store data in HashTable
// Assumptions:
//

#ifndef RECORDABLE_H
#define RECORDABLE_H

#include <vector> //vector
#include "transaction.h"

class Recordable
{
public:
  Recordable();	//default constructor
  virtual ~Recordable(); //destructor
  
  // comparison operators
  bool operator==(const Recordable &);
  bool operator>(const Recordable &);
  bool operator<(const Recordable &);

  // return container of pointers to all transactions
  vector<*Transaction> getHistory() const;	
  // add a transaction to history
  void addToHistory(const *Tranasction &); 
  void clearHistory(); // remove all items from items history
  
  string toString(); // display item information

protected:


private:
  // points to all transactions that involve this item
  vector<*Transaction> history;	

};

#endif // RECORDABLE_H
