//fiction.h

//--------------------------------------------------------------------------
// Fiction
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 		Gary Mixson, Binh Nguyen
// Implemented by:
// A type of Book representing all Fiction books.
// Assumptions: 
//

#ifndef FICTION_H
#define FICTION_H

#include "book.h"

#include <iostream>
class Fiction : public Book
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Book
   // Assumptions: All information needed to construct the Book is provided.
   // Precondition: Book information is supplied.
   // Postcondition: Book has been constructed.
   // Sample call: Fiction b("So Long and Thanks for all the Fish",
   // "Douglas Adams", 1990);
   Fiction();
   
   //--------------------------------------------------------------------------
   // destructor
   // Destructs an instance of Fiction
   // Assumptions: Fiction exists.
   // Precondition: Fiction exists.
   // Postcondition: Fiction has been destroyed..
   // Sample call: Called automatically at end of program.
   ~Fiction();
   
   //--------------------------------------------------------------------------
   // getType (Public)
   // Returns the type of the book's publication.
   // Assumptions: type is correct.
   // Precondition: None.
   // Postcondition: type is given to caller.
   // Sample call: int type = getType();
   char getType(); // always returns "F"

protected:

private:
   const char "F";
};

#endif // FICTION_H
