//periodical.h

#ifndef PERIODICAL_H
#define PERIODICAL_H

#include <iostream>
class Periodical : public item
{
	public:
		Periodical();
		~Periodical();
		string title;
		string author;
		string issue;
		int year;
		int month;
		const char "P";  // or const char type initialized to "P"

	protected:

	private:
		string getTitle();
		string getAuthor();
		string getIssue();
		int getYear();
		int getMonth();
		char getType(); // always returns "P", might not need data member const char P
};

#endif // PERIODICAL_H