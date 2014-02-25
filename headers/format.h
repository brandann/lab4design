//format.h

//--------------------------------------------------------------------------
// Format
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
//              Gary Mixson, Binh Nguyen
// Implemented by:
// A type of Book representing all Fiction books.
// Assumptions:
//

#ifndef FORMAT_H
#define FORMAT_H

class Fiction : public Book
{
public:
   Format(string);
   ~Format();
   string getFormat();
private:
   string type;
};

#endif // FORMAT_H
