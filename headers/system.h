//system.h

//--------------------------------------------------------------------------
// System
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//              Gary Mixson, Binh Nguyen
// Implemented by:
// A Book in in the library. Derived from Item.
// Assumptions: Book contains all information needed to identify it.
//

#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>

#include "library.h"
#include "person.h"
#include "item.h"
#include "transactionfactory.h"
#include "itemfactory.h"
#include "input.h"
#include "output.h"


class System
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of System
   // Assumptions: System is invoked once by main.
   // Precondition: main is running.
   // Postcondition: System has been constructed.
   // Sample call: System manager(in, out);
   System(Input &, Output &);
   
   //--------------------------------------------------------------------------
   // destructor
   // Destroys an instance of System
   // Assumptions: All items System contains are destroyed entirely by their
   //              destructors.
   // Precondition: System exists.
   // Postcondition: System and its contents have been destroyed.
   // Sample call: Called automatically at end of program.
   ~System();
   
   //--------------------------------------------------------------------------
   // setInput (Public)
   // Changes the input source for System.
   // Assumptions: System is running; a new input object is available.
   // Precondition: System exists.
   // Postcondition: System uses the new input object.
   // Sample call: manager.setInput(in2);
   void setInput(const Input &);
   
   //--------------------------------------------------------------------------
   // parseCommands (Public)
   // Interprets commands recieved from the Input object.
   // Assumptions: Commands are correctly formatted.
   // Precondition: Input object has command data.
   // Postcondition: System parses and acts on the command data.
   // Sample call: manager.parseCommands();
   void parseCommands();

protected:

private:
   Library sysLibrary; // the Library system interacts with.
   Input in;           // the input object System is currently using.
   Output out;         // the output object System is currently using.
   TransactionFactory transactor; // the transaction factory
   ItemFactory itemizer; // the item factor used to populate the Library

   //--------------------------------------------------------------------------
   // checkout (Public)
   // checks out an Item for a Person
   // Assumptions: Both Item and Person exist.  Copies of Item are available.
   // Precondition: System recieves a checkout command.
   // Postcondition: Item is checked out by Person.
   //                Items available decreases by 1.
   // Sample call: manager.checkout("1234", "Hound of the Baskervilles");   
   void checkout(Person, Item);
 
//--------------------------------------------------------------------------
   // checkin (Public)
   // checks in an Item for a Person
   // Assumptions: Both Item and Person exist.  Copies of Item are available.
   // Precondition: System recieves a checkin command.
   // Postcondition: Item is checked in by Person.
   //                Items available increases by 1.
   // Sample call: manager.checkin("1234", "Hound of the Baskervilles");   
   coid checkIn(Person, Item);


};

#endif // SYSTEM_H
