//output.h

//--------------------------------------------------------------------------
// Output
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//		Gary Mixson, Binh Nguyen
// Implemented by: 
// Input class to handle data and activity delivery.

#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
class Output
{
	public:
		//-----------------------------------------------------------
		// constructor
		// contructs an instance of Output
		// Assumptions:   	None
   		// Precondition:  	None
   		// Postcondition: 	Output instance is created
		Output();
		
		//-----------------------------------------------------------
		// destructor
		// Destructs an istance if Output
		// Assumptions:		None
		// Precondition:	Output exists
		// Postcondition:	Output has been destroyed
		~Output();
		
		//-----------------------------------------------------------
		// display (Public)
   		// displays the content of the library
   		// Assumptions: 	Library is valid
   		// Precondition: 	string is a valid output file
   		// Postcondition:	Library is outputed to string file
		bool display(string*);

	protected:

	private:

};

#endif // OUTPUT_H
