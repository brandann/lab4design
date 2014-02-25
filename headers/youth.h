//youth.h

#ifndef YOUTH_H
#define YOUTH_H

#include "book.h"

class Youth : public Book
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Youth
   // Assumptions: All information needed to construct the Youth Book is provided.
   // Precondition: Youth information is supplied.
   // Postcondition: Youth has been constructed.
   // Sample call: Youth b("So Long and Thanks for all the Fish",
   // "Douglas Adams", 1990);
   Youth();
   
   //--------------------------------------------------------------------------
   // destructor
   // Destructs an instance of Youth
   // Assumptions: Youth exists.
   // Precondition: Youth exists.
   // Postcondition: Youth has been destroyed..
   // Sample call: Called automatically at end of program.
   ~Youth();
   
   //--------------------------------------------------------------------------
   // getType (Public)
   // Returns the type of the book's publication.
   // Assumptions: type is correct.
   // Precondition: None.
   // Postcondition: type is given to caller.
   // Sample call: int type = getType();
   char getType(); // always returns "Y"

protected:

private:
   const char "Y";
};

#endif // YOUTH_H
