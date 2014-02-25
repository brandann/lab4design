//library.h

//--------------------------------------------------------------------------
// Library
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 		Gary Mixson, Binh Nguyen
// Implemented by:
// A Library class containing collections of associated books and people.
// Assumptions: One library is invoked by System to contain all books.
//		Multiple libraries could be created to represent branches.
//

#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>

#include "hashtable.h"  // NOTE: can use STL Hashtable instead, if
			// you use your own hashtable in factories

class Library
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Library
   // Assumptions: All information needed to construct the Library is provided.
   // Precondition: System has been invoked.
   // Postcondition: Empty Library has been constructed.
   // Sample call: Library lib();
   Library();
   
   //--------------------------------------------------------------------------
   // Destructor
   // Destroys an instance of Library
   // Assumptions: Library exists.  HashTables have a "clear Hashtable" method.
   // Precondition: Library exists.
   // Postcondition: Library is destroyed, as well as all contents of library.
   // Sample call: Called at end of program.
   ~Library();
   
   //--------------------------------------------------------------------------
   // findPatron (Public)
   // Shows if a patron exists in the Library.  May also return a reference.
   // Assumptions: Person may or may not exist inside people.
   // Precondition: Library and people Hashtable exist.  
   // Postcondition: if the patron is found, returns true; else returns false.
   // Sample call: bool found = findPatron(bob);
   bool findPatron(Patron); // could return a reference
			    // to the patron's location
			    
   //--------------------------------------------------------------------------
   // findItem (Public)
   // Shows if an item exists in the Library.  May also return a reference.
   // Assumptions: Item may or may not exist inside books.
   // Precondition: Library and book Hashtable exist.  
   // Postcondition: if the item is found, returns true; else returns false.
   // Sample call: bool found = findItem(item);			    
   *Item findItem(Item);

protected:

private:

   HashTable people;
   HashTable books;  // might want to rename to catalogue,
   		     // since it can contain other types of items.
   HashTable catTable;
   HashTable treeTable;
};

#endif // LIBRARY_H
