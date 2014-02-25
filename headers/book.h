//book.h

//--------------------------------------------------------------------------
// Book
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 		Gary Mixson, Binh Nguyen
// Implemented by:
// A Book in in the library. Derived from Item.
// Assumptions: Book contains all information needed to identify it.
// base classes.
//

#ifndef BOOK_H
#define BOOK_H

#include "item.h" 
#include <string>

#include <iostream>
class Book : public Item
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Book
   // Assumptions: All information needed to construct the Book is provided.
   // Precondition: Book information is supplied.
   // Postcondition: Book has been constructed.
   // Sample call: Book b("So Long and Thanks for all the Fish",
   // 			  "Douglas Adams", 1990);
   Book(string title, string author, int year);
   
   //--------------------------------------------------------------------------
   // destructor
   // Destructs an instance of Book
   // Assumptions: Book exists.
   // Precondition: Item exists.
   // Postcondition: Item has been destroyed..
   // Sample call: Called automatically at end of program.
   ~Book();
   
   //--------------------------------------------------------------------------
   // getTitle (Public)
   // Returns the title of the book.
   // Assumptions: Title is correct.
   // Precondition: None.
   // Postcondition: title is given to caller.
   // Sample call: string title = getTitle();
   string getTitle();
   
   //--------------------------------------------------------------------------
   // getAuthor (Public)
   // Returns the author of the book.
   // Assumptions: author is correct.
   // Precondition: None.
   // Postcondition: author is given to caller.
   // Sample call: string author = getAuthor();
   string getAuthor();
   
   //--------------------------------------------------------------------------
   // getYear (Public)
   // Returns the year of the book's publication.
   // Assumptions: year is correct.
   // Precondition: None.
   // Postcondition: year is given to caller.
   // Sample call: int year = getYear();
   int getYear();
   
protected:

private:
   string title;  // title of the book
   string author; // author of the book
   int year;	  // year of publication of the book

};

#endif // BOOK_H
