//book.h

#ifndef BOOK_H
#define BOOK_H

#include <string>

#include <iostream>
class Book : public Item
{
	public:
		Book(string title, string author, int year);
		~Book();
		string getTitle():
		string getAuthor();
		int getYear();

	protected:

	private:
		string title;
		string author;
		int year;

};

#endif // BOOK_H
