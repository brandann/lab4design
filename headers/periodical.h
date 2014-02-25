//periodical.h

//--------------------------------------------------------------------------
// Book
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 		Gary Mixson, Binh Nguyen
// Implemented by:
// A Periodical in in the library. Derived from Item.
// Assumptions: Periodical contains all information needed to identify it.
//

#ifndef PERIODICAL_H
#define PERIODICAL_H

#include "item.h"

#include <iostream>
class Periodical : public Item
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Periofical
   // Assumptions: All information needed to construct the Periodical
   //              is provided.
   // Precondition: Periodical information is supplied.
   // Postcondition: Periodical has been constructed.
   // Sample call: Periodical p("Communications of the ACM", 3, 1996);
   Periodical();

   //--------------------------------------------------------------------------
   // destructor
   // Destroys an instance of Periodical
   // Assumptions: Periodical exists.
   // Precondition: Periodical exists.
   // Postcondition: Periodical has been destroyed..
   // Sample call: Called automatically at end of program.
   ~Periodical();
   
   //--------------------------------------------------------------------------
   // getTitle (Public)
   // Returns the title of the periodical.
   // Assumptions: Title is correct.
   // Precondition: None.
   // Postcondition: title is given to caller.
   // Sample call: string title = getTitle();  
   string getTitle();

   //--------------------------------------------------------------------------
   // getYear (Public)
   // Returns the year of the periodical's publication.
   // Assumptions: year is correct.
   // Precondition: None.
   // Postcondition: year is given to caller.
   // Sample call: int year = getYear();
   int getYear();
   
   //--------------------------------------------------------------------------
   // getMonth (Public)
   // Returns the Month of the periodical's publication.
   // Assumptions: month is correct.
   // Precondition: None.
   // Postcondition: month is given to caller.
   // Sample call: int month = getMonth();
   int getMonth();
   
   //--------------------------------------------------------------------------
   // getType (Public)
   // Returns the type of the Periodical.
   // Assumptions: Type is always equal to "P".
   // Precondition: None.
   // Postcondition: type is given to caller.
   // Sample call: int type= getType();
   char getType(); // always returns "P", might not need data member const char P

protected:

private:
   string title;    // periodical's title
   int year;        // periodical's year of publication
   int month;       // periodical's month of publication
   const char "P";  // or const char type initialized to "P"
};

#endif // PERIODICAL_H
