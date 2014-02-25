// item.h

//--------------------------------------------------------------------------
// Item
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// An item in in the library.  Base class for Books, Periodicals, ect.
// Assumptions:   All items in the library are represented by Item and its
//		  base classes.
//

#ifndef ITEM_H
#define ITEM_H

#include <iostream>

#include "hashableitem.h"

class Item
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Item
   // Assumptions:   All information needed to construct the Item is provided.
   // Precondition:  Item information is supplied.
   // Postcondition: Item has been constructed.
   //		     quantity is incremented by 1.
   Item();
   
   //--------------------------------------------------------------------------
   // destructor
   // Destructs an instance of Item
   // Assumptions:   Item exists. Quanity is correct.
   // Precondition:  Item exists.
   // Postcondition: Item has been destroyed..
   //		     quantity is decremented by 1.
   ~Item();
   
   //--------------------------------------------------------------------------
   // getQuantity (Public)
   // Returns the number of copies of an Item.
   // Assumptions:   Quanity is correct.
   // Precondition:  None.
   // Postcondition: quantity is given to caller.
   int getQuantity();
   
   //--------------------------------------------------------------------------
   // isAvailable (Public)
   // Returns the availability of an item.
   // Assumptions:   availabile is correct.
   // Precondition:  None.
   // Postcondition: availabile is given to caller.
   bool isAvailable();
   
   //--------------------------------------------------------------------------
   // getFormat (Public)
   // Returns the Format of an item.
   // Assumptions:   Format is correct.
   // Precondition:  None.
   // Postcondition: Format is given to caller.
   Format getFormat();

protected:

private:
   int quantity;  // number of copies of the item
   bool available; // whether or not the book is available
   Format format; // such as hardcopy or ebook
                  // might be implemented with a hardcoded string at this point,
                  // since there is no current Format class.
  

};

#endif // ITEM_H
