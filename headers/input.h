//input.h

//--------------------------------------------------------------------------
// Input
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// Input class to handle data and activity into the System

#ifndef INPUT_H
#define INPUT_H

#include <iostream>
class Input
{
	public:
		//-----------------------------------------------------------
		// istream (Public Friend)
   		// translates the string to input
   		// Assumptions: 	stirng is valid Input format
   		// Precondition: 	string is not NULL
   		//			Input exists
   		// Postcondition:	commands are stored in the Input
		friend istream operator>>(istream&, string);
		
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of Input
		// Assumptions:   	None
   		// Precondition:  	Input information is formated correctly
   		//			and contain valid commands
   		// Postcondition: 	All valid data is added to System
		Input();
		
		//-----------------------------------------------------------
		// destructor
		// Destructs an istance if Input
		// Assumptions:		None
		// Precondition:	Input exists
		// Postcondition:	Input has been destroyed
		~Input();
		
		//-----------------------------------------------------------
		// getNextCommand (Public)
   		// returns the next command stored in Input
   		// Assumptions: 	Input has next command
   		// Precondition: 	Input is loaded with commands
   		// Postcondition:	command is returned to caller
   		//			command is removed from Input
		string getNextCommand();

	protected:

	private:

};

#endif // INPUT_H
